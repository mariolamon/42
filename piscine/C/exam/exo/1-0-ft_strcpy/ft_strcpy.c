#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2) {
	int i;
	for (i = 0; s2[i]; i++) s1[i] = s2[i];
	s1[i + 1] = '\0';
	return(s1);
}
