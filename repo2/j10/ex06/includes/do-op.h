#ifndef HEAD
#define HEAD

#include <stdio.h>
#include <unistd.h>

typedef struct operator
{
    char    op;
    void    (*opfunc)(int, int);
}           operand;

void            ft_putnbr(int nb);
void            ft_putchar(char c);
void            ft_putstr(char *str);
int             ft_atoi(char *str);
int             ft_str_is_numeric(char *str);
void            initialize(operand *oper);
void            add(int x, int y);
void            subtract(int x, int y);
void            multiply(int x, int y);
void            divide(int x, int y);
void            modulus(int x, int y);

#endif

