#!/usr/bin/php
 <?php
 	while (1) {
		echo "Entrez un nombre : ";
		$number = trim(fgets(STDIN));
		if (!is_numeric($number)) {
			echo $number . ' n\'est pas un chiffre';
			echo "\n";
		}
		else {
			echo 'Le nombre ' . $number . ' est ';
			if ($number % 2 == 0) echo "Pair\n";
			else echo "Impair\n";
		}
	}
 ?>
