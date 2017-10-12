<?php
	session_start();
	if ($_SESSION['loggued_on_user']) {
		if ($_SESSION['loggued_on_user'] === "") echo "ERROR\n";
		else echo $_SESSION['loggued_on_user']."\n";
	} else echo "ERROR\n";
?>
