//


#include "ft_opp.h"

int main(int argc, char **argv)
{
    int i;
    int flag;
    
    if (argc <= 4) {
        
        i = 0;
        flag = 0;
        while (i < 6) {
            if (argv[2][0] == g_opptab[i].op) {
                flag = 1;
                g_opptab[i].opfunc(ft_atoi(argv[1]), ft_atoi(argv[3]));
            }
            i++;
        }
        if (flag == 0) {
            ft_putstr("\nError:  No operator");
        }
        ft_putchar('\n');
    }
    return (0);
}
