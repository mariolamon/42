#!/usr/bin/php
<?PHP
	function month_nb($str) {
		if ($str == "janvier" || $str == "Janvier") return (1);
		if ($str == "fevrier" || $str == "Fevrier") return (2);
		if ($str == "mars" || $str == "Mars") return (3);
		if ($str == "avril" || $str == "Avril") return (4);
		if ($str == "mai" || $str == "Mai") return (5);
		if ($str == "juin" || $str == "Juin") return (6);
		if ($str == "juillet" || $str == "Juillet") return (7);
		if ($str == "aout" || $str == "Aout" || $str == "août" || $str == "Août") return (8);
		if ($str == "septembre" || $str == "Septembre") return (9);
		if ($str == "octobre" || $str == "Octobre") return (10);
		if ($str == "novembre" || $str == "Novembre") return (11);
		if ($str == "decembre" || $str == "Decembre" || $str == "décembre" || $str == "Décembre") return (12);
	}
	if ($argc > 1) {
		if (preg_match("/(^[L|l]undi|^[M|m]ardi|^[M|m]ercredi|^[J|j]eudi|^[V|v]endredi|^[S|s]amedi|^[D|d]imanche){1} [0-9]{1,2} ([J|j]anvier|[F|f]evrier|[M|m]ars|[A|a]vril|[M|m]ai|[J|j]uin|[J|j]uillet|[A|a]o[u|û]t|[S|s]eptembre|[O|o]ctobre|[N|n]ovembre|[D|d][e|é]cembre){1} [0-9]{4} [0-9]{2}:[0-9]{2}:[0-9]{2}/", $argv[1]) != 0) {
			preg_match("/[0-9]{1,2}/", $argv[1], $day);
			preg_match("/([J|j]anvier|[F|f]evrier|[M|m]ars|[A|a]vril|[M|m]ai|[J|j]uin|[J|j]uillet|[A|a]o[u|û]t|[S|s]eptembre|[O|o]ctobre|[N|n]ovembre|[D|d][e|é]cembre)/", $argv[1], $month);
			$month = month_nb($month);
			preg_match("/[0-9]{4}/", $argv[1], $year);
			preg_match("/[0-9]{2}:/", $argv[1], $hour);
			$hour = substr($hour[0], 0, 2);
			preg_match("/:[0-9]{2}:/", $argv[1], $min);
			$min = substr($min[0], 1, 2);
			preg_match("/:[0-9]{2}/", $argv[1], $sec);
			$sec = substr($sec[0], 1);

			echo mktime($hour[0], $min[0], $sec[0], $month[0], $day[0], $year[0]) . "\n";
		}
		else echo "Wrong Format\n";
	}
?>
