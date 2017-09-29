#!/usr/bin/php
<?php
	if ($argc != 2) exit;
	else {
		$curl = curl_init($argv[1]);
		curl_setopt($curl, CURLOPT_RETURNTRANSFER, 1);
		$file = curl_exec($curl);
		curl_close($curl);
		if (!preg_match_all("/<img.*?src=['|\"](?P<url>.*?)['|\"]/si", $file, $img)) exit;
		$r_name = substr(strrchr($argv[1], "/"), 1);
		if (!mkdir($r_name)) exit;

		foreach($img["url"] as $elem) {
			$elem = preg_replace("/^\/\//", "http://", $elem);
			$i_name = substr(strrchr($elem, "/"), 1);
			$curl = curl_init($elem);
			curl_setopt($curl, CURLOPT_RETURNTRANSFER, 1);
			$file = curl_exec($curl);
			fwrite(fopen($r_name . "/" . $i_name, "w"), $file);
		}
	}
?>
