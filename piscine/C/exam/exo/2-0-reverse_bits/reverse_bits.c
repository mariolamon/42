unsigned char	reverse_bits(unsigned char octet) {
	unsigned char c = 0;
	int i;
	for (i = 0; i < 8; i++) {
		if (octet & (1 << i)) c |= (1 << (7 - i));
	}
	return c;
}
