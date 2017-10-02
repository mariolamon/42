#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int	main(int ac, char **av) {
	if (ac == 2) {
		int i;
		for (i = 0; av[1][i]; i++) {
			if (av[1][i] >= 65 && av[1][i] <= 90) ft_putchar(av[1][i] + 32);
			if (av[1][i] >= 97 && av[1][i] <= 122) ft_putchar(av[1][i] - 32);
		}
	} ft_putchar('\n');
	return (0);
}
