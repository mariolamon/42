<?php
	if (!$_POST['login'] || !$_POST['oldpw'] || !$_POST['newpw'] || $_POST['submit'] !== "OK") {
		echo "ERROR\n";
		exit;
	}
	$login = $_POST['login'];
	$oldpwd = hash('whirlpool', $_POST['oldpw']);
	$newpwd = hash('whirlpool', $_POST['newpw']);
	$modif = FALSE;
	$tab = unserialize(file_get_contents("private/passwd"));
	$i = 0;
	foreach ($tab as $elem) {
		if ($elem['login'] === $login && $elem['passwd'] === $oldpwd) {
			$tab[$i]['passwd'] = $newpwd;
			$modif = TRUE;
		}
		$i++;
	}
	if ($modif === FALSE) {
		echo "ERROR\n";
		exit;
	} else {
		$tab = serialize($tab);
		file_put_contents("private/passwd", $tab);
		echo "OK\n";
	}
?>
