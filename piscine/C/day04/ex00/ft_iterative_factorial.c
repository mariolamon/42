int		ft_iterative_factorial(int nb) {
	int n = nb - 1;
	if (nb > 0) {
		while (n > 0) nb *= n--;
		return (nb);
	}
	else return(0);
}
