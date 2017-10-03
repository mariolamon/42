#include <unistd.h>

int	main(int ac, char **av) {
	if (ac == 2) {
		int i;
		for (i = 0; av[1][i] == ' '; i++);
		while (av[1][i] != ' ' && av[1][i] != '\0') write(1, &av[1][i++], 1);
	} write(1, "\n", 1);
	return (0);
}
