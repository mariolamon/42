#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab) {
	int x, y;
	for (x = 0; tab[x]; x++) {
		for (y = 0; tab[x][y]; y++) ft_putchar(tab[x][y]);
		ft_putchar('\n');
	}
}
