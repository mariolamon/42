#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_comb(void) {
	int nb[3] = {48, 48, 48};
	while (nb[0] <= 57) {
		if (nb[0] < nb[1] && nb[1] < nb[2]) {
			ft_putchar(nb[0]);
			ft_putchar(nb[1]);
			ft_putchar(nb[2]);
			ft_putchar(',');
			ft_putchar(' ');
		}
		if (nb[2]++ >= 57) {
			nb[2] = 48;
			nb[1]++;
		}
		if (nb[1] == 58) {
			nb[1] = 48;
			nb[2] = 48;
			nb[0]++;
		}
	}
}
