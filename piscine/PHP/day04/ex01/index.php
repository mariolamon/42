<?php
	session_start();
	if ($_GET['submit'] == "OK") {
		$_SESSION['login'] = $_GET['login'];
		$_SESSION['passwd'] = $_GET['passwd'];
	}
?>
<html>
	<head>
		<meta content="text/html" charset="utf-8"/>
	</head>
	<body><from action="." method="get">
		<input type="text" name="login" value="<?php if ($_SESSION['login']) echo $_SESSION['login']; ?>"></input>
		<input type="password" name="passwd" value="<?php if ($_SESSION['passwd']) echo $_SESSION['passwd']; ?>"></input>
		<input type="submit" name="submit" value="OK"></input>
	<from></body>
</html>
