#!/usr/bin/php
<?php
	if ($argc == 2) {
		$str = trim($argv[1]);
		$str = str_ireplace("   ", " ", $str);
		while (strstr($str, "  ")) $str = str_ireplace("  ", " ", $str);
		$words = explode(" ", $str);
		foreach ($words as $element) {
			echo $element;
			if (end($words) == $element) echo "\n";
			else echo " ";
			
		}
	}
?>
