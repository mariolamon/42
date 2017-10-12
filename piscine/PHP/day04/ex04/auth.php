<?php
	function auth($login, $passwd) {
		$tab = unserialize(file_get_contents("private/passwd"));
		foreach($tab as $elem) {
			if ($elem['login'] === $login && $elem['passwd'] === hash('whirlpool', $passwd)) return TRUE;
		} return FALSE;
	}
?>
