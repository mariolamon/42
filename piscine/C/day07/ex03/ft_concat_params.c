#include <stdlib.h>

int	ft_strlen(char *str) {
	int i = 0;
	while (str[i]) i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv) {
	int x,y,i;
	int lenght = 0;
	char *str;
	i = 0;
	x = 0;
	y = 0;
	while (argv[i]) lenght += (ft_strlen(argv[i++]) + 1);
	str = malloc(sizeof(char) * lenght);
	i = 0;
	while (argv[x]) {
		while (argv[x][y]) str[i++] = argv[x][y++];
		str[i++] = '\n';
		x++;
		y = 0;
	}
	return(str);

}
