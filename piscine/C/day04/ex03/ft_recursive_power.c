int		ft_recursive_power(int nb, int power) {
	int result;
	if (power == 0) result = 1;
	else result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
