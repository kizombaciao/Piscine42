#include <stdlib.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int num;
    char *p;
    
    num = ft_atoi(nbr);
    ft_putnbr_base(num, base_to)
    
    p = (char *)malloc(1 * sizeof(char));
    
    
}

int main()
{
    char decimal[] = "0123456789";
    char binary[] = "01";
    char hexadecimal[] = "0123456789ABCDEF";
    char octal[] = "poneyvif";
    char nbr[] = "123";
    char *p;
    
    
    p = ft_convert_base(nbr, decimal, binary);
    
    free(p);
    return (0);
}
