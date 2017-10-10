#include <unistd.h>

int	ft_cmp(char c, char *str) {
	int i;
	for (i = 0; str[i]; i++) {
		if (str[i] == c) return (1);
	} return (0);
}

int	ft_cmpm(char *str, int l) {
	int i;
	for (i = l - 1; i >= 0; i--) {
		if (str[l] == str[i]) return (1);
	} return (0);
}

int	main(int ac, char **av) {
	int i;
	int x;
	char *result;
	for (i = 0; av[1][i]; i++) {
		if (ft_cmp(av[1][i], av[2]) && !ft_cmpm(av[1], i)) write(1, &av[1][i], 1);
	} write(1, "\n", 1);
	return (0);
}
