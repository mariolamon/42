void	ft_putchar(char c);

int	main(int ac, char **av) {
	int i = 0;
	while (av[0][i]) ft_putchar(av[0][i++]);
	return (0);
}
