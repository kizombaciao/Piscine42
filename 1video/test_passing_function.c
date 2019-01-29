
#include <stdio.h>

int ft_any(int (*f)(char *))
{
    int i;
    char c = '5';
    char *p;
    
    p = &c;
    i = (*f)(p);
    return (i);
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
    int num;
    
    num = ft_any(&func);
    
    printf("\n%d", num);
}
