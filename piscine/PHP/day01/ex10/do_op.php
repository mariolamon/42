#!/usr/bin/php
<?php	
	if ($argc == 4) {
		$op1 = trim($argv[1]);
		$operande = trim($argv[2]);
		$op2 = trim($argv[3]);
		$result = 0;
		
		if ($operande == "+") $result = $op1 + $op2;
		if ($operande == "-") $result = $op1 - $op2;
		if ($operande == "*") $result = $op1 * $op2;
		if ($operande == "/") $result = $op1 / $op2;
		if ($operande == "%") $result = $op1 % $op2;
		
		echo $result . "\n";
	}
	else echo "Incorrect Parameters";
?>
