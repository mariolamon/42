#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_print_numbers(void) {
	int i;
	for (i = 0; i <= 9; i++) ft_putchar(i + '0');
}
