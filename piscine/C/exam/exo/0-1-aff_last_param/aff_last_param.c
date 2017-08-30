#include <unistd.h>

int	main(int ac, char **av) {
	int i;
	if (ac > 1) {
		for (i = 0; av[ac - 1][i]; i++) write(1, &av[ac - 1][i], 1);
		write(1, "\n", 1);
	}
	else write(1, "\n", 1);
	return (0);
}
