<?php
	if (!$_POST['login'] || !$_POST['passwd'] || $_POST['submit'] !== "OK") {
		echo "ERROR\n";
		exit;
	}
	$new = array('login' => $_POST['login'], 'passwd' => hash('whirlpool', $_POST['passwd']));
	if(!file_exists("private") || !file_exists("private/passwd")) {
		echo "mk";
		mkdir('private');
		echo "mk";
		$tab = array($new);
	} else {
		$tab = unserialize(file_get_contents("private/passwd"));
		foreach ($tab as $elem) {
			if ($elem['login'] === $_POST['login']) {
				echo "ERROR\n";
				exit;
			}
			array_push($tab, $new);
		}
	}
	print_r($tab);
	$tab = serialize($tab);
	echo $tab;
	file_put_contents("private/passwd", $tab);
	echo "OK\n";
?>
