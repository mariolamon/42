int	ft_atoi(char *str) {
	int i = 0;
	int nb = 0;
	int neg = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')) i++;
	while (str[i] == '-') {
		neg = 1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57)) {
		nb *= 10;
		nb += str[i++] - 48;
	}
	if (neg == 1) return (-nb);
	else return (nb);

}
