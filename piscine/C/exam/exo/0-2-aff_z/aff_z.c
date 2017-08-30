#include <unistd.h>

int	main(int ac, char **av) {
	if (ac > 1) write(1, "z\n", 2);
	else write(1, "z\n", 2);
	return (0);
}
