#!/usr/bin/php

<?php
	function ft_is_sort($array) {
		$comp = $array;
		sort($array);
		for ($i = 0; $i != (count($array) - 1); $i++) {
			if ($comp[$i] != $array[$i]) return (FALSE);
		}
		return (TRUE);
	}
?>
