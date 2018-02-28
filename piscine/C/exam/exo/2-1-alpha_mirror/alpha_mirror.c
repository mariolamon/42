#include <unistd.h>

int	main(int ac, char **av) {
	int i;
	char c;
	if (ac == 2) {
		for (i = 0; av[1][i]; i++) {
			if ((av[1][i] >= 65) && (av[1][i] <= 90)) c = 90 - (av[1][i] - 65);
			else if ((av[1][i] >= 97) && (av[1][i] <= 122)) c = 122 - (av[1][i] - 97);
			else c = av[1][i];
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
