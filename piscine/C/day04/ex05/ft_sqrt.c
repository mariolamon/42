int		ft_sqrt(int nb) {
	int result = 0;
	while (result < nb) {
		if (result * result == nb) return result;
		else result++;
	} return(0);
}
