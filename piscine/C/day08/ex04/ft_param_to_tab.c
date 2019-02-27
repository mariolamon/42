#include "ft_stock_par.h"
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int ft_strlen(char *str) {
  int i = 0;
  while (str[i]) i++;
  return (i);
}
char *ft_strdup(char *src) {
  int i;
  char *dest;
  dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
  for (i = 0; src[i]; i++) dest[i] = src[i];
  dest[i] = src[i];
  return (dest);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av) {
  int i;
  t_stock_par *tab;
  tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
  if (!tab) return (tab);
  for (i = 0; av[i]; i++) {
    tab[i].size_param = ft_strlen(av[i]);
    tab[i].str = av[i];
    tab[i].copy = ft_strdup(av[i]);
    tab[i].tab = ft_split_whitespaces(av[i]);
  }
  tab[i].str = 0;
  return (tab);
}
