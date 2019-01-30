//
#ifndef FT_OPP_H
#define FT_OPP_H

#include <stdio.h>
#include <unistd.h>

typedef struct operator
{
    char    op;
    void    (*opfunc)(int, int);
}           t_opp;

t_opp g_opptab[] =
{
    {"-", &ft_sub},
    {"+", &ft_add},
    {"*", &ft_mul},
    {"/", &ft_div},
    {"%", &ft_mod},
    {"", &ft_usage}
};

void            ft_putnbr(int nb);
void            ft_putchar(char c);
void            ft_putstr(char *str);
int             ft_atoi(char *str);
int             ft_str_is_numeric(char *str);

void    ft_sub(int x, int y);
void    ft_add(int x, int y);
void    ft_mul(int x, int y);
void    ft_div(int x, int y);
void    ft_mod(int x, int y);
void    ft_usage(int x, int y);

#endif
