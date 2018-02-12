#include <unistd.h>

int ft_strlen(char *str) {
	int i;
	while(str[i]) i++;
	return(i);
}

int	main(int ac, char **av) {
	int i;
	if (ac == 2) {
		for (i = (ft_strlen(av[1]) - 1); av[1][i] == ' '; i--);
		while (av[1][i] != ' ') i--;
		while (av[1][i]) {
			if (av[1][i] != ' ') write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);	
}
