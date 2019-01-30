#include <stdio.h>
#include <stdlib.h>

// note, how the arguments have been converted into int
int		pgcd(unsigned int nb, unsigned int nb2)
{
	int i;

	i = nb; // doesn't matter if nb or nb2?
	while (i > 0) // use brute force loop
	{ // loop downward
		if (nb % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
