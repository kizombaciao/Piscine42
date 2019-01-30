#include <stdio.h>
#include <stdlib.h>

int isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}
int		isvalid(char c, int base) // if valid hexadecimal entry
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}
int		value_of(char c) // convert hexadecimal into digits
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}
int		ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;
	while (isblank(*str)) // get rid of the spaces
		str++;
    sign = (*str == '-') ? -1 : 1; // sign is equal to -1 or +1
	(*str == '-' || *str == '+') ? ++str : 0; // elegant code
	while (isvalid(*str, str_base))
		result = result * str_base + value_of(*str++); // key formula
	return (result * sign);
}
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}
