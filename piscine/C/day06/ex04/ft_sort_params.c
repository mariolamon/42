#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}
int	ft_strcmp (char *s1, char *s2) {
	int i;
	for (i = 0; s1[i] || s2[i]; i++) {
		if (s1[i] < s2[i]) return (-1);
		if (s1[i] > s2[i]) return (1);
	}
	return (0);
}
char	*ft_strcpy (char *dest, char *src) {
	int i;
	for (i = 0; src[i]; i++) dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}
int	main(int ac, char **av) {
	int ai;
	int i;
	char *tmp;
	if (ac > 1) {
		for (ai = 1; av[ai]; ai++) {
			if (ft_strcmp(av[ai], av[ai + 1]) > 0) {
				ft_strcpy(tmp, av[ai]);
				ft_strcpy(av[ai + 1], av[ai]);
				ft_strcpy(av[ai], tmp);
				ai = 1;
			}
		}
		for (ai = 1; av[ai]; ai++) {
			for (i = 0; av[ai][i]; i++) ft_putchar(av[ai][i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
