INSERT INTO `ft_table` (`login`, `groupe`, `date_de_creation`)
SELECT `nom`, 'student', DATE(date_naissance) FROM `fiche_personne` WHERE `nom` REGEXP 'a' && LENGTH(nom) < 9 ORDER BY `nom` LIMIT 10; 
