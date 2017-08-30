int		ft_str_is_alpha(char *str) {
	int i = 0;
	while (str[i]) {
		if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z'))) i++;
		else return (0);
	}
	return (1);
}
