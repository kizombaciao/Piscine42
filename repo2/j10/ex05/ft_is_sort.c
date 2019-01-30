//

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;
    
    i = 1;
    while (i < length) {
        if ((*f)(tab[i-1], tab[i]) >= 0) {
            return (0);
        }
        i++;
    }
    return (1);
}

int my_pos_neg(int num1, int num2)
{
    return(num1 - num2);
}

int main()
{
    int tab[] = {1,2,3,3,5};
    int num;
    
    num = ft_is_sort(tab, 5, &my_pos_neg);
    printf("\n111:  %d", num);
    
}
