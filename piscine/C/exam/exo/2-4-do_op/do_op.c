#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av) {
	if (ac == 4) {
		int nb1 = atoi(av[1]), nb2 = atoi(av[3]), result = 0;
		char op = av[2][0];
		if (op == '+') result = nb1 + nb2;
		if (op == '-') result = nb1 - nb2;
		if (op == '*') result = nb1 * nb2;
		if (op == '/') result = nb1 / nb2;
		if (op == '%') result = nb1 % nb2;
		printf("%d\n", result);
	} else printf("\n");
	return (0);
}
