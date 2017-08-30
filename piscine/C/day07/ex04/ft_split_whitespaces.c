#include <stdlib.h>

int	ft_nb_word(char *str) {
	int nb_word = 0, i = 0;
	if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') nb_word++;
	while (str[i]) {
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') &&
		(str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n')) nb_word++;
		i++;
	}
	return (nb_word);
}

int	ft_local(int i, char *str, int *lenght) {
	int space = 1, word = 0, tmp = 0;
	while (str[i]) {
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && !word) {
			word = 1;
			beg = i;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0') i++;
			*lenght = i - tmp;
			break;
		}
		i++;
	}
	return (tmp);
}

char	**ft_split_whitespaces(char *str) {
	int x, y, i = 0, word_lenght = 0;
	char **result = (char **)malloc(sizeof(char *) * (ft_nb_word(str) + 1));
	while (x < ft_nb_word(str)) {
		i = ft_local(i, str, &word_lenght);
		result[x] = (char *)malloc(sizeof(char) * (word_lenght + 1));
		for (y = 0; y < word_lenght; y++) result[x][y] = str[i++];
		result[x][y] = '\0';
		x++;
	}
	result[ft_nb_word(str) + 1] = 0;
	return (result);
}
