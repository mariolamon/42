SELECT `titre`, `resum` FROM `film` WHERE CONCAT(`titre`, ' ', `resum`) REGEXP '42' ORDER BY `duree_min`;
