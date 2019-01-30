#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isalpha(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
int		ft_alpha_mirror(char c) { // why is int used??? char seems to work.
    // check whether capital or lowercase
    // eg, if B, then B is 1 unit different from A and then subtract 1 from Z to get mirror
	return (c = (c >= 'A' && c <= 'Z') ? 'Z' - (c - 'A') : 'z' - (c - 'a'));
} // trick: to get the mirror alphabet

int		main(int ac, char **av) {
	if (ac == 2) {
		while (*av[1]) {
			if (ft_isalpha(*av[1]))
				ft_putchar(ft_alpha_mirror(*(av[1]++))); // why not pass ptr???
			else
				write(1, av[1]++, 1); // no need to mirror if not alphabet
		}
	}
	write(1, "\n", 1);
	return (1);
}
