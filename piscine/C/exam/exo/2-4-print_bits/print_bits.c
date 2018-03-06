#include <unistd.h>

void	print_bits(unsigned char octet) {
	int i;
	char c;
	for (i = 7; i >= 0; i--) {
		c = (octet & (1 << i)) ? '1' : '0';
		write(1, &c, 1);
	}
}
