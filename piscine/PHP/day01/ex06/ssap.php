#!/usr/bin/php
<?php
	if ($argc != 1) {
		$words = array();
		$str = "";
		for ($i = 1; $i < count($argv); $i++) {
			$str .= " " . $argv[$i];
		}
		$str = trim(str_ireplace("   ", " ", $str));
		while (strstr($str, "  ")) $str = str_ireplace("  ", " ", $str);
		$words = explode(" ", $str);
		sort($words);
		foreach ($words as $element) {
			echo $element;
			echo "\n";
		}
	}
?>
