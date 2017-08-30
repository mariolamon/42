int	ft_strcmp(char *s1, char *s2) {
	int i;
	for (i = 0; s1[i] || s2[i]; i++) {
		if (s1[i] < s2[i]) return (-1);
		if (s1[i] > s2[i]) return (1);
	}
	return (0);
}
