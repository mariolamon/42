#include <unistd.h>

int		main(int argc, char **argv) {
	int i;
	if (argc != 2) write(1, "a\n", 2);
	else {
		for (i = 0; argv[1][i]; i++) {
			if (argv[1][i] == 'a') {
				write(1, "a", 1);
				break;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
