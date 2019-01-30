// 
/*
 Calling ft_advanced_sort_wordtab() with ft_strcmp as a second
 argument will return the same result as ft_sort_wordtab().
 */

#ifndef TTT
#define TTT
#include <stdio.h>
#include <stdlib.h>
#endif

int my_strcmp(char *p1, char *p2)
{
    while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
        p1++;
        p2++;
    }
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

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char*, char *))
{
    int i;
    
    i = 1;
    while (tab[i]) {
        if ((*cmp)(tab[i-1],tab[i]) > 0) {
            my_swap_by_ptr(&tab[i-1], &tab[i]);
        }
        i++;
    }
}

int main()
{
    int i;
    char **p;
    int n1 = 5, n2 = 20;
    int (*f_ptr_cmp)(char*, char*);
    
    p = (char **)malloc(sizeof(char *) * (n1 + 1));
    i = 0;
    while (i < n1) {
        *(p + i) = (char *)malloc(sizeof(char) * (n2 + 1));
        *(p + i) = "abc";
        i++;
    }
    *(p + 0) = "abc";
    *(p + 1) = "a";
    *(p + 2) = "xyz";
    *(p + 3) = "abc";
    *(p + 4) = "abc";
    *(p + i) = NULL;
    
    f_ptr_cmp = &my_strcmp;
    ft_advanced_sort_wordtab(p, f_ptr_cmp);
    while (*(p)) {
        printf("\nEnd  %s", *(p));
        p++;
    }
}
