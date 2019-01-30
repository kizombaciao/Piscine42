//

#include <stdio.h>
#include <stdlib.h>


char **ft_split_whitespaces(char *str);

int ft_strcmp(char *s1, char *s2)
{
    char c1;
    char c2;
    
    c1 = *s1;
    c2 = *s2;
    if (c1 == '\0') {
        return (c1 - c2);
    }
    while (c1 == c2) {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == '\0') {
            return (c1 - c2);
        }
    }
    return (c1 - c2);
}

int my_tab_compare(char *p1, char *p2)
{
    printf("\n111 %s   %s", p1, p2);
    
    while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
        printf("\nP1P2:  %c   %c", *p1, *p2);
        
        if (*p1 == '\0' || *p2 == '\0') {
            printf("\nHEY1  %c   %c", *p1, *p2);
            return (*p1 - *p2);
        }
        
        p1++;
        p2++;
    }
    printf("\nCOMP:  %d", *p1 - *p2);
    return (*p1 - *p2);
}

void my_swap_by_ptr(char **p1, char **p2)
{
    char *temp;
    
    printf("\nswap:  %s  %s", *p1, *p2);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("\nswap:  %s  %s", *p1, *p2);
}

void ft_sort_wordtab(char **tab)
{
    int i;
    int h;
    
    
    h = 1;
    while (tab[h]) {
        i = 1;
        while (tab[i]) {
            /* positive, then swap */
            if (my_tab_compare(tab[i-1], tab[i]) > 0) {
                my_swap_by_ptr(&tab[i-1], &tab[i]);
            }
            i++;
        }
        h++;
    }
}


int main()
{
    int i;
    char **p;
    int n1 = 5, n2 = 20;
    
    p = (char **)malloc(sizeof(char *) * (n1 + 1));
    i = 0;
    while (i < n1) {
        *(p + i) = (char *)malloc(sizeof(char) * (n2 + 1));
        *(p + i) = "abc";
        i++;
    }
    *(p + 0) = "rst";
    *(p + 1) = "aa";

    *(p + 2) = "xyz";
    *(p + 3) = "aaa";
    *(p + 4) = "aa";

    *(p + i) = NULL;

    ft_sort_wordtab(p);
    
    while (*(p)) {
        printf("\nEnd  %s", *(p));
        p++;
    }
    
}
/*

         printf("\n111 %s   %d", *(p + i), i);
i = 0;
while (p[i]) {
    printf("\n222 %d", i);
    i++;
}
printf("\n222 %d", i);

 printf("\n333 %s   %d", *(tab + i), i);
 
               printf("\nSW  %s  %s", tab[i], tab[i+1]);
                printf("\nswap:  %s  %s", tab[i], tab[i+1]);
*/
