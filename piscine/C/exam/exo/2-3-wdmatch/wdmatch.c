#include <unistd.h>

int	ft_strlen(char *str) {
	int i = 0;
	while (str[i]) i++;
	return (i);
}

int	main(int ac, char **av) {
	int x = 0, y = 0, count = 0;
	if (ac == 3) {
		for (x; av[1][x]; x++) {
			while (av[2][y]) {
				if (av[1][x] == av[2][y]) {
					count++;
					break;
				}
				y++;
			}
		}
		if (count == ft_strlen(av[1])) for (y = 0; av[1][y]; y++) write(1, &av[1][y], 1);
	} write(1, "\n", 1);
	return (0);
}
