#!/usr/bin/php
<?PHP
	$str = trim(str_ireplace("\t", " ", $argv[1]));
	$str = str_ireplace("   ", " ", $str);
	while(strstr($str, "  ")) $str = str_ireplace("  ", " ", $str);
	$words = explode(" ", $str);

	foreach($words as $element) {
		echo $element;
		if ($element == end($words)) echo "\n";
		else echo " ";
	}
?>
