#!/usr/bin/php
<?php
	if ($argc != 2) exit;
	if (!file_exists($argv[1])) exit;
	$file = file_get_contents($argv[1]);
	$file = preg_replace_callback('/<a href=(.*?)>(.*?)<\/a>/s', function ($prev_matches) {
		$file = preg_replace_callback(array('/(>)(.*?)(<)/s', '/(title=")(.*?)(")/s'), function ($matches) {
			return ($matches[1] . strtoupper($matches[2]) . $matches[3]);
		}, $prev_matches);
		return ($file[0]);
	}, $file);
	echo $file;
?>
