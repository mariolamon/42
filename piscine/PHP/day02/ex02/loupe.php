#!/usr/bin/php
<?php
	if ($argc != 2) exit;
	else {
		$file = file_get_contents($argv[1]);
		$file = preg_replace_callback("/<a href=(.*?)>(.*?)<\/a>/", function($link) {
			$file = preg_replace_callback(array("/(>)(.*?)(<)/s","/(title=\")(.*?)(\")/s"), strtoupper($match[0]), $link[0]);
		}, $file);
		echo $file;
	}
?>
