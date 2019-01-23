#include "do-op.h"

void ft_sub(int x, int y)
{
    ft_putnbr(x - y);
}
void ft_add(int x, int y)
{
    ft_putnbr(x + y);
}
void ft_mul(int x, int y)
{
    ft_putnbr(x * y);
}
void ft_div(int x, int y)
{
    if (y == 0)
    {
        ft_putstr("Stop: division by zero");
    } else {
        ft_putnbr(x / y);
    }
}
void ft_mod(int x, int y)
{
    if (y == 0)
    {
        ft_putstr("Stop: modulo by zero");
    }
    else
    {
        ft_putnbr(x % y);
    }
}
void ft_usage(int x, int y)
{
    ft_putstr("\nError:  USAGE");
}
