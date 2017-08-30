#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int		ft_end(char *tab, int size) {
	int count = 0;
	int index = 0;
	while (index < size) {
		if (tab[index] == '9') count++;
		index++;
	}
	if (count == size) return(1);
	else return(0);
}

void	ft_print_combn(int n) {
	char tab[n];
	int index;
	while (index < n) tab[index++] = '0';
	while (ft_end(tab, n) != 1) {
		if (tab[n - 1] == '9') {
			for (index = n - 1; tab[index] == '9'; index--);
			tab[index]++;
			index++;
			while (index < n) tab[index++] = '0';
		}
		else tab[n - 1]++;
		for (index = 0; index < n; index++) ft_putchar(tab[index]);
		ft_putchar(',');
		ft_putchar(' ');
	}
}
