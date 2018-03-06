int	max(int *tab, unsigned int len) {
	int nb = 0, i;
	for (i = 0; i < len; i++) if (nb < tab[i]) nb = tab[i];
	return (nb);
}
