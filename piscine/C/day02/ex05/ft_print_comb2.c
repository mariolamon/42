#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_comb2(void) {
	int nb[4] = {48, 48, 48, 49};
	while (nb[0] <= 57) {
		ft_putchar(nb[0]);
		ft_putchar(nb[1]);
		ft_putchar(' ');
		ft_putchar(nb[2]);
		ft_putchar(nb[3]);
		ft_putchar(',');
		ft_putchar(' ');
		nb[3]++;
		if (nb[3] == 58) {
			nb[3] = 48;
			nb[2]++;
		}
		if (nb[2] == 58) {
			nb[3] = 48;
			nb[2] = 48;
			nb[1]++;
		}
		if (nb[1] == 58) {
			nb[3] = 48;
			nb[2] = 48;
			nb[1] = 48;
			nb[0]++;
		}
	}
}
