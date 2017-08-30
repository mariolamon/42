void	ft_putchar(char c);

int	main(int ac, char **av) {
	int i;
	int ai;
	if (ac > 1) {
		for (ai = 1; av[ai]; ai++) {
			for (i = 0; av[ai][i]; i++) ft_putchar(av[ai][i]);
			ft_putchar('\n');
		}	
	}
	return (0);
}
