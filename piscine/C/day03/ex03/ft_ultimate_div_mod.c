void	ft_ultimate_div_mod(int *a, int *b) {
	int dividende = *a;
	int diviseur = *b;
	*a = dividende / diviseur;
	*b = dividende % diviseur;
}
