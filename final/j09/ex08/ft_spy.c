#include <stdio.h>

void ft_putchar(char c);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
void ft_write(char *str);


void ft_spy(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    while (i < argc) {
        if (ft_strcmp("president", &argv[i][0]) == 0) {
            ft_write("Alert\n");
            return;
        } else if (ft_strcmp("attack", &argv[i][0]) == 0) {
            ft_write("Alert\n");
            return;
        } else if (ft_strcmp("Bauer", &argv[i][0]) == 0) {
            ft_write("Alert\n");
            return;
        }
        i++;
    }
}

void ft_write(char *str)
{
    int i;
    
    i = 0;
    while (str[i]) {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    
    ft_spy(argc, argv);
    return (0);
}

/*
 printf("\n111:  %s", argv[i]);
 */
