int		ft_str_is_printable(char *str) {
	int i = 0;
	while (str[i]) {
		if (str[i] <= 31) i++;
		else return (0);
	}
	return (1);
}
