int		ft_reg(int a, int b) {
	if (a >= b) return (a - b);
	else return (b - a);
}

int		ft_result(int nb, int dam,int *story) {
	int a;
	int b;
	int count = 0;

	if (dam == nb) count++;
	a = 0;
	while (a < nb) {
		b = 0;
		while (b < dam && !(story[b] == a || ft_reg(story[b], a) == dam - b)) b++;
		if (b < dam) {
			a++;
			continue;
		}
		story[dam] = a;
		count += ft_result(nb, dam + 1, story);
		a++;
	}
	return (count);
}

int		ft_eight_queens_puzzle(void) {
	int story[8];

	return (ft_result(8, 0, story));
}
