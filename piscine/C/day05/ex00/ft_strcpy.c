char	*ft_strcpy(char *dest, char *src) {
	int index;
	for (index = 0; src[index] != '\0'; index++) dest[index] = src[index];
	return(dest);
}
