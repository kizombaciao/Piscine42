#ifndef FT_H
#define FT_H

#include "do-op.h"

typedef struct operator
{
    char    *op;
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

#endif
