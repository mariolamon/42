char *ft_strncat(char *dest, char *src, int nb) {
	int i = 0;
	while (dest[i]) i++;
	while (src[nb]) dest[i++] = src[nb++];
	return (0);
}
