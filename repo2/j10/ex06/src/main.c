#include "do-op.h"

/*
    what is wrong with multiplication??? using *?
 */

int main(int argc, char **argv)
{
    int i;
    int flag;
    
    operand oper[5];
    printf("\n333:  %c", argv[1][0]);
    printf("\n333:  %c", argv[2][0]);
    printf("\n333:  %c", argv[3][0]);

    if (argv[2][0] == '/' && argv[3][0] == '0') {
        ft_putstr("Error: Division by Zero");
        return (0);
    }
    if (argc <= 4) {
        initialize(oper);
        i = 0;
        flag = 0;
        while (i < 5) {
            printf("\n555:  %c\n", argv[2][0]);
            if (argv[2][0] == oper[i].op) {
                flag = 1;
                printf("\nANSWER:  ");
                oper[i].opfunc(ft_atoi(argv[1]), ft_atoi(argv[3]));
            }
            i++;
        }
        if (flag == 0) {
            /* error */
        }
        ft_putchar('\n');
    }
    return (0);
}
