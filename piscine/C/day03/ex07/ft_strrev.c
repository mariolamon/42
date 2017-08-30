void	ft_swap(char *a, char *b) {
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str) {
	int index = 0;
	int size = 0;

	char tmp;

	while (str[size] != '\0') size++;
	size -= 1;
	while (index < size) ft_swap(&str[index++], &str[size--]);
	return(str);
}
