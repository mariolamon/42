#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int	main(int ac, char **av) {
	if (ac == 2) {
		int i;
		for (i = 0; av[1][i]; i++) {
			if ((av[1][i] >= 'A' && av[1][i] <= 'M') || (av[1][i] >= 'a' && av[1][i] <= 'm')) ft_putchar(av[1][i] + 13);
			else if ((av[1][i] > 'M' && av[1][i] <= 'Z') || (av[1][i] > 'M' && av[1][i] <= 'z')) ft_putchar(av[1][i] - 13);
			else ft_putchar(av[1][i]);
		}
	} ft_putchar('\n');
	return (0);
}
