#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
int		main(void)
{
	unsigned char c;

	c = 1;
	c = swap_bits(c);
    printf("\n%u", c);
	return (0);
}
