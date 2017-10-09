#include <unistd.h>

int	main(int ac, char **av) {
	if (ac == 2) {
		int i = 0;
		for (i = 0; av[1][i]; i++);
		i -= 1;
		while (i >= 0) write(1, &av[1][i--], 1);
	} write(1, "\n", 1);
	return (0);
}
