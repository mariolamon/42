int	match(char *s1, char *s2) {
	if ((*s1 == '\0') && (*s2 == '\0')) return (1);
	else if ((*s1 == '\0') || (*s2 == '\0')) return (0);
	else if (*s1 == *s2) return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*') return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else return (0); 	
}
