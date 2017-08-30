void	ft_swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size) {
	int i = 0;
	int x;
	while (i < (size - 1)) {
		while (x < size) {
			if (tab[x] < tab[i]) ft_swap(&tab[i], &tab[x]);
			else x++;
		}
		i++;
		x = i + 1;
	}
}
