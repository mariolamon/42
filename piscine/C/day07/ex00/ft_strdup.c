#include <stdlib.h>

int	ft_strlen(char *str) {
	int i = 0;
	while(str[i]) i++;
	return (i);
}

char	*ft_strdup(char *src) {
	int i;
	char *dest = malloc(sizeof(char) * ft_strlen(src));
	for (i = 0; src[i]; i++) dest[i] = src[i];
	return (dest);
}
