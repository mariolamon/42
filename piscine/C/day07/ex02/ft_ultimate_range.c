#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max) {
	int lenght = max - min;
	int i = 0;
	int *tab;
	if (min >= max) return(0);
	tab = malloc(sizeof(int) * (lenght));
	while (min < max) tab[i++] = min++;
	*range = tab;
	return(lenght);
}
