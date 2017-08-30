void	ft_putchar (char c);

int	main(int ac, char **av) {
	int i;
	int ai = (ac - 1);
	while (ai >= 1) {
		for (i = 0; av[ai][i]; i++) ft_putchar(av[ai][i]);
		ai--;
		ft_putchar('\n');
	}
	return (0);
}
