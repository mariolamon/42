#!/usr/bin/php
<?php	
	if ($argc == 3) {
		$key = array();
		$nom = array();
		$prenom = array();
		$mail = array();
		$IP = array();
		$pseudo = array();
		$data = file_get_contents($argv[1]);
		$tab = explode("\n", $data);	
		for ($i = 0; $tab[$i]; $i++) $tab[$i] = explode(";", $tab[$i]);
		for ($i = 0; $tab[$i]; $i++) {
			if ($argv[2] == "nom") array_push($key, $tab[$i][0]);
			if ($argv[2] == "prenom") array_push($key, $tab[$i][1]);
			if ($argv[2] == "mail") array_push($key, $tab[$i][2]);
			if ($argv[2] == "IP") array_push($key, $tab[$i][3]);
			if ($argv[2] == "pseudo") array_push($key, $tab[$i][4]);
		}
		for ($i = 0; $tab[$i]; $i++) {
			$nom = array_merge($nom, array($key[$i] => $tab[$i][0]));
			$prenom = array_merge($prenom, array($key[$i] => $tab[$i][1]));
			$mail = array_merge($mail, array($key[$i] => $tab[$i][2]));
			$IP = array_merge($IP, array($key[$i] => $tab[$i][3]));
			$pseudo = array_merge($pseudo, array($key[$i] => $tab[$i][4]));
		}
	}
	while (1) {
		echo "Entrez votre commande: ";
		$com = trim(fgets(STDIN));
		if ($com == "exit") exit;
		eval($com);
	}
?>
