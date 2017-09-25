#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_word_count(char *str) {
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
			tmp = i;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0') i++;
			lenght[0] = i - tmp;
			break;
		}
		i++;
	}
	return (tmp);
}

char	**ft_split_whitespaces(char *str) {
	int y, x = 0, i = 0, word_lenght = 0;
	char **result = (char **)malloc(sizeof(char *) * (ft_word_count(str) + 1));
	while (x < ft_word_count(str)) {
		i = ft_local(i, str, &word_lenght);
		printf("%d\n", word_lenght);
		result[x] = (char *)malloc(sizeof(char) * (word_lenght + 1));
		for (y = 0; y < word_lenght; y++) result[x][y] = str[i++];
		result[x][y] = '\0';
		x++;
	}
	result[ft_word_count(str)] = 0;
	return (result);
}
