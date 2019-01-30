//
#include "ft_opp.h"

void ft_sub(int x, int y)
{
    printf("\nSubtract");
    ft_putnbr(x - y);
}
void ft_add(int x, int y)
{
    ft_putnbr(x + y);
}
void ft_mul(int x, int y)
{
    printf("\nMultiply");
    ft_putnbr(x * y);
}
void ft_div(int x, int y)
{
    ft_putnbr(x / y);
}
void ft_mod(int x, int y)
{
    ft_putnbr(x % y);
}
void ft_usage(int x, int y)
{
    ft_putstr("\nError:  USAGE");
}



