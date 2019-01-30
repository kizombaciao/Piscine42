#include "do-op.h"

void initialize(operand *oper)
{
    oper[0].op = '+';
    oper[0].opfunc = &add;
    oper[1].op = '-';
    oper[1].opfunc = &subtract;
    oper[2].op = '*';
    oper[2].opfunc = &multiply;
    oper[3].op = '/';
    oper[3].opfunc = &divide;
    oper[4].op = '%';
    oper[4].opfunc = &modulus;
}

void add(int x, int y)
{
    ft_putnbr(x + y);
}

void subtract(int x, int y)
{
    printf("\nSubtract");
    ft_putnbr(x - y);
}

void multiply(int x, int y)
{
    printf("\nMultiply");
    ft_putnbr(x * y);
}

void divide(int x, int y)
{
    ft_putnbr(x / y);
}

void modulus(int x, int y)
{
    ft_putnbr(x % y);
}
