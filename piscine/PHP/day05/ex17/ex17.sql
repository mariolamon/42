SELECT COUNT(id_abo) AS 'nb_abo', FLOOR(AVG(prix)) AS 'moy_abo', MOD(SUM(duree_abo), 42) AS 'ft' FROM abonnement;
