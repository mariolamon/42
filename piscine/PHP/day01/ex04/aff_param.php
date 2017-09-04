#!/usr/bin/php

<?php
	foreach ($argv as $element) {
		if ($element != $argv[0]) {
			echo $element;
			echo "\n";
		}
	}
?>
