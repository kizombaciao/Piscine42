
#include <stdio.h>
#include <stdlib.h>


int ft_any(char **tab, int(*f)(char *))
{
    int i;
    
    i = 0;
    /* does loop ending work??? */
    while (tab[i]) {
        printf("\n222: %s", tab[i]);
        if ((*f)(tab[i]) == 1 ) {
            return (1);
        }
        i++;
    }
    return (0);
}

int func(char *p)
{
    if (*p == '1') {
        return (1);
    }
    return (0);
}

int main()
{
    int j;
    int num;
    int len = 2, width = 5;
    char **p;
    char *c;
    
    p = (char **)malloc((len+1)*sizeof(char *));
    j = 0;
    while (j < 2) {
        p[j] = (char *)malloc((width+1)*sizeof(char));
        p[j] = "223";
        j++;
    }
    p[j] = NULL;

    num = ft_any(p, &func);
    printf("\n333: %d   %d", j, num);
}
/*

 char *ft_strcpy(char *dest, char *src);

 c = ft_strcpy(p[j], "223");

 c = ft_strcpy(p[j], NULL);

 */
