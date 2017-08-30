int		ft_strlen(char *str) {
	int i;
	while (str[i]) i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find) {
	int i;
	int y;

	if (ft_strlen(to_find) == 0) return (str);

	for (i = 0; str[i] != '\0'; i++) {
		for (y = 0; to_find[y] == str[i + y]; y++) {
			if (y == (ft_strlen(to_find) - 1)) return (str + i);
		}
		y = 0;
	}
	return(0);
}
