#!/usr/bin/php
<?php
	if ($argc > 2) {
		$key = $argv[1];
		$value;
		
		for ($i = 2; $i < count($argv); $i++) {
			$tab = explode(":", $argv[$i]);
			if ($tab[0] == $key) $value = $tab[1];
		}

		echo $value . "\n";
	}
?>
