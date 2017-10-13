<?php
	session_start();
	if ($_POST['submit'] == "OK") {
		if (!file_exists('private/chat')) {
			$tab = array(array('time' => time(), 'login' => $_SESSION['loggued_on_user'], 'msg' => $_POST['msg']));
			file_put_contents('private/chat', serialize($tab));
		} else {
			$file = fopen('private/chat', 'c+');
			flock($file, LOCK_EX | LOCK_SH);
			$tab = unserialize(file_get_contents('private/chat'));
			array_push($tab, array('time' => time(), 'login' => $_SESSION['loggued_on_user'], 'msg' => $_POST['msg']));
			file_put_contents('private/chat', serialize($tab));
			flock($file, LOCK_UN);
		}
?>
		<html>
			<head>
				<meta content="text/html" charset="utf-8"/>
				<script langage="javascript">
					top.frame['chat'].location = 'chat.php';
				</script>
			</head>
			<body>
				<from action="." method="post">
					<input type="text" name="msg" value=""/>
					<input type="submit" name="submit" value="OK"/>
				</from>
			</body>
		<html>

<?php
	}
?>
