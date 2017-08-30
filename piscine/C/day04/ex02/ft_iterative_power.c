int		ft_iterative_power(int nb, int power) {
	int mult = nb;
	if (power == 0) return(0);
	while (power != 1) {
		nb *= mult;
		power--;
	} return(nb);
}
