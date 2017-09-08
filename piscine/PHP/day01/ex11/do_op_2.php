#!/usr/bin/php
<?php
	if ($argc == 2) {
		$op = sscanf($argv[1], "%d %c %d %s");
		if ($op[0] && $op[1] && $op[2] && !$op[3]) {
			if ($op[1] == "*") $result = $op[0] * $op[2];
			if ($op[1] == "/") $result = $op[0] / $op[2];
			if ($op[1] == "%") $result = $op[0] % $op[2];
			if ($op[1] == "+") $result = $op[0] + $op[2];
			if ($op[1] == "-") $result = $op[0] - $op[2];
			echo $result . "\n";
		}
		else echo "Syntax Error\n";
	}
	else echo "Incorrect Parameters\n";
?>
