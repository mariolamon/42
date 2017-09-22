#include <stdlib.h>

int	ft_strlen(char *str) {
	int i = 0;
	while (str[i]) i++;
	return (i);
}

int	ft_test(int i, char *str, char *charset) {
	int y;
	for (y = 0; charset[y]; y++) {
		if (charset[y] != str[i]) return (0);
		i++;
	} 
	return (1);
}

int	ft_word_count(char *str, char *charset) {
	int count = 1, i;
	for (i = 0; str[i]; i++) {
		if (ft_test(i, str, charset)) count++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset) {	
	int word_lenght, y,  x = 0, i = 0;
	char **result = (char **)malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	while (x < ft_word_count(str, charset)) {
		for (word_lenght = 0; !(ft_test(i, str, charset) || i == ft_strlen(str)) ; i++) word_lenght++;
		i -= word_lenght;
		result[x] = (char *)malloc(sizeof(char) * (word_lenght + 1));
		for (y = 0; y < word_lenght; y++) result[x][y] = str[i++];
		i += ft_strlen(charset);
		result[x][y] = '\0';
		x++;
	}
	result[ft_word_count(str, charset) + 1] = 0;
	return (result);
}
