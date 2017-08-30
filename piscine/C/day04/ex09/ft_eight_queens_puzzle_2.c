#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int		ft_soluce(int nb, int *story) {
	int a = 0;
	int b;

	while (a < nb) {
		b = 0;
		while (b < nb) {
			if (b == story[a]) ft_putchar(b + 48 + 1);
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

int		ft_reg(int a, int b) {
	if (a >= b) return (a - b);
	else return (b - a);
}

void	ft_result(int nb, int dam, int *story) {
	int a;
	int b;
	int count = 0;

	if (dam == nb) ft_soluce(nb, story);
	a = 0;
	while (a < nb) {
		b = 0;
		while (b < dam && !(story[b] == a || ft_reg(story[b], a) == dam - b)) b++;
		if (b < dam) {
			a++;
			continue;
		}
		story[dam] = a;
		ft_result(nb, dam + 1, story);
		a++;
	}
}

void	ft_eight_queens_puzzle_2(void) {
	int story[8];

	return (ft_result(8, 0, story));
}
