#!/usr/bin/php
<?php
	$count = FALSE;
	$tab = array();
	$file = explode("\n", file_get_contents($argv[1]));
	$i = 1;
	while($i < count($file)) {
		array_push($tab, array($file[$i], $file[$i + 1]));
		$i += 4;
	}
	sort($tab);
	for ($i = 0; $i < count($tab); $i++) {
		echo $i + 1 . "\n";
		foreach($tab[$i] as $elem) echo $elem . "\n";
		if ($tab[$i] != end($tab))echo "\n";
	}
?>
