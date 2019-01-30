#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}
// to output the computed figure
void	ft_putposnbr(int n) {
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
int		ft_atoi_nc(char *s) {
	int		r;
	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}
// trick: to check if prime
int is_prime(int n) {
	int i;
	i = 2; // start at 2
	while (i < n) // try every digit up to n
		if (!(n % i++)) // if there is a divisor,
			return (0);
	return (1);
}

void	add_prime_sum(int n) {
	int	i;
	int	count;
	count = 0;
	if (n == 1) // 1 is not a prime!!!
		count = 0;
	i = 1;
    // trick: to find prime inferior
	while (++i <= n)
		if (is_prime(i))
			count += i;
	ft_putposnbr(count);
}

int		main(int ac, char **av) {
	if (ac == 2 && ft_atoi_nc(av[1]) > 0)
		add_prime_sum(ft_atoi_nc(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (1);
}
