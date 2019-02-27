#include "ft_stock_par.h"

void ft_putchar(char c);
void ft_putnbr(int nb) {
  if (nb < 0) {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb >= 10) {
    ft_putnbr(nb / 10);
    nb = nb % 10;
  }
  if (nb < 10) ft_putchar(nb + 48);
}
void ft_putstr(char *str) {
  int i = 0;
  while (str[i]) ft_putchar(str[i++]);
}

void ft_show_tab(struct s_stock_par *param) {
  int i;
  while (param && param->str) {
    ft_putstr(param->str);
    ft_putchar('\n');
    ft_putnbr(param->size_param);
    ft_putchar('\n');
    for (i = 0; param->tab[i]; i++) {
      ft_putstr(param->tab[i]);
      ft_putchar('\n');
    }
    param++;
  }
}
