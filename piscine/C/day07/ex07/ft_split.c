#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str) {
	int i = 0;
	while (str[i]) i++;
	return (i);
}

int	ft_is_charset(int i, char *str, char *charset) {
	int y;
	for (y = 0; charset[y]; y++, i++) if (charset[y] != str[i]) return (0);
	return (1);
	
}

int	ft_word_count(char *str, char *charset) {
	int i = 0, count = 1;
	while (str[i]) {
		if (ft_is_charset(i, str, charset)) {
			count++;
			i += ft_strlen(charset);
		}
		else i++;
	}
	return (count);

}

char	**ft_split(char *str, char *charset) {	
	int word_lenght, y,  x = 0, i = 0;
	char **result = (char **)malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	
	while (x < ft_word_count(str, charset)) {
		for (word_lenght = 0; !(ft_is_charset(i, str, charset) || i == ft_strlen(str)) ; i++) word_lenght++;
		i -= word_lenght;
		result[x] = (char *)malloc(sizeof(char) * (word_lenght + 1));
		for (y = 0; y < word_lenght; y++, i++) result[x][y] = str[i];
		result[x][y] = '\0';
		x++;
		i += ft_strlen(charset);
	}
	result[ft_word_count(str, charset)] = 0;
	return (result);
}
