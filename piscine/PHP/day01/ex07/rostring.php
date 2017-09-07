#!/usr/bin/php
<?php	
	$words = array();
	$end;
	$str = trim(str_ireplace("   ", " ", $argv[1]));
	while (strstr($str, "  ")) $str = str_ireplace("  ", " ", $str);
	$words = explode(" ", $str);
	print_r($words);
	$end = $words[0];
	unset($words[0]);
	$words = array_values($words);
	array_push($words, $end);
	print_r($words);
	foreach($words as $element) {
		echo $element;
		if ($element == end($words)) echo "\n";
		else echo " ";
	}
?>
