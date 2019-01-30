#include <stdlib.h>
#include <stdio.h>
int        ft_atoi(char *s)
{
    int        sign;
    long    r;
    
    r = 0;
    sign = 1;
    while (*s == 32 || (*s >= 9 && *s <= 13)) /* skip special chars */
        s++;
    if (*s == '-') /* check if negative number */
    {
        sign = -1;
        s++;
    }
    if (*s == '+') /* check if positive char used */
        s++;
    while (*s >= '0' && *s <= '9')
    {
        r = r * 10 + *s - '0';
        s++;
    }
    return (sign * (int)r);
}
void	fprime(unsigned int nb)
{
	unsigned	i;

	if (nb == 1)
		printf("1"); // can we ignore if nb = 1???
	else
	{
		i = 1;
		while (nb > 1)
		{
			if (nb % ++i == 0)
			{
				printf("%d", i);
				nb /= i;
				if (nb > 1) // to know if there are more factors
					printf("*");
				--i; // why not start counter from 1 again???
			} // b/c if there was a lower factor, we would have seen it
		}
	}
}
int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1])); // NEED ATOI()
	printf("\n");
	return (0);
}
