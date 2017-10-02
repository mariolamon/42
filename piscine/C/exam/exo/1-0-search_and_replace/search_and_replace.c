#include <unistd.h>

int	main(int ac, char **av) {
	if (ac == 4) {
		int i;
		for (i = 0; av[1][i]; i++) {
			if (av[1][i] == av[2][0]) write(1, &av[3][0], 1);
			else write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
