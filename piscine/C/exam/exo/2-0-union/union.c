#include <unistd.h>

int	main(int ac, char **av) {
	int i1;
	int i2;
	int x = 0;
	if (ac == 3) {
		char *str1 = av[1];
		char *str2 = av[2];
		for (i1 = 0; str1[i1]; i1++) {
			for (i2 = 0; i2 < i1; i2++) if (str1[i2] == str1[i1]) x = 1;
			if (!x) write(1, &str1[i1], 1);
			x = 0;
		}
		for (i1 = 0, x = 0; str2[i1]; i1++) {
			for (i2 = 0; str1[i2]; i2++) if (str2[i1] == str1[i2]) x = 1;
			for (i2 = 0; i2 < i1; i2++) if (str2[i2] == str2[i1]) x = 1;
			if (!x) write(1, &str2[i1], 1);
			x = 0;
		}
	}
	write(1, "\n", 1);
	return (0);
}
