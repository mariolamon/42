unsigned char	reverse_bits(unsigned char octet) {
	unsigned char c;
	int i;
	for (i = 0; i < 8; i++) {
		if (octet & (1 << i)) c = c | (1 << (7 - 1));
	}
	return c;
}
