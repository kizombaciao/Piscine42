#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c);
char **ft_split_whitespaces(char *str);

void ft_print_words_tables(char **tab)
{
    int i;
    int j;
    
    i = 0;
    while (tab[i][0] != '0' ) {
        j = 0;
        while (tab[i][j]) {
            ft_putchar(tab[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    char str[] = "123\t456\n789 12345678";
    char **p;
    p = ft_split_whitespaces(str);
    ft_print_words_tables(p);
    
    return (0);
}

/*
 printf("\nIII:  %d", i);
 printf("\n111:  %s", str);
 
 */
