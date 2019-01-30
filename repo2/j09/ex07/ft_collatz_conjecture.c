
#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base)
{
    printf("   %d   ", base);
    if (base == 1) {
        return (1);
    } else {
        if (base % 2 == 0) {
            return(ft_collatz_conjecture(base / 2));
        } else {
            return(ft_collatz_conjecture(3 * base + 1));
        }
    }
}

int main()
{
    int num;
    
    num = ft_collatz_conjecture(10);
}
