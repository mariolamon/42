SELECT CONCAT(`nom`, ' ', `prenom`, ' ', DATE(`date_naissance`)) AS 'date de naissance' FROM `fiche_personne` WHERE EXTRACT(YEAR FROM dat_naissance) = 1989 ORDER BY nom;
