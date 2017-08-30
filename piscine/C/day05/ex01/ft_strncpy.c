int		ft_strlen(char *str) {
	int i;
	for (i = 0; str[i]; i++);
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n){
	unsigned int i;
	for (i = 0 ; i < n && src[i] != '\0' ; i++) dest[i] = src[i];
	while (i < n) dest[i++] = '\0';
	return(dest);
}
