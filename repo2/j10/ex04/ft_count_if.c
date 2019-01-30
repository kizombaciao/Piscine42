//

#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);

int ft_count_if(char **tab, int(*f)(char *))
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while (i<5) {
        if ((*f)(tab[i]) == 1) {
            count++;
        }
        i++;
    }
    return (count);
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
    while (j < 5) {
        p[j] = (char *)malloc((width+1)*sizeof(char));
        c = ft_strcpy(p[j], "1");
        j++;
    }
    c = ft_strcpy(p[j], "\0");
    
    
    num = ft_count_if(p, &func);
    printf("\n333: %d   %d", j, num);
    
}
