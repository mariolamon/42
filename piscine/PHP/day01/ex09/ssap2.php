#!/usr/bin/php
<?php
	$tab = array();
	$str = "";
	
	
	for ($i = 1; $i < count($argv); $i++) $str .= " " . $argv[$i];
	$str = trim(str_ireplace("   ", " ", $str));
	while (strstr($str, "  ")) $str = str_ireplace("  ", " ", $str);
	$tab = explode(" ", $str);
	
	$string = array();
	$numeric = array();
	$ascii = array();

	foreach($tab as $element) {
		if (ctype_alpha($element) == TRUE) $string[] = $element;
		else if (is_numeric($element) == TRUE) $numeric[] = $element;
		else $ascii[] = $element;
	}
	sort($string, SORT_NATURAL | SORT_FLAG_CASE);
	sort($numeric, SORT_STRING);
	sort($ascii);
	$tab = array($string, $numeric, $ascii);
	
	foreach($tab as $element) {
		foreach($element as $select) echo $select . "\n";
	}
?>
