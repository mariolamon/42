#include <stdlib.h>

int	*ft_range(int min, int max) {
	int lenght = max - min;
	int i = 0;
	if (min >= max) return (NULL);
	else {
		int *tab = malloc(sizeof(int) * (lenght));
		while (min < max) tab[i++] = min++;
		return (tab);
	}
}
