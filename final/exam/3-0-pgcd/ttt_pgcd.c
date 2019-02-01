#include <stdio.h>

int pgcd(int n1, int n2)
{
    int i;
    
    i = n1;
    
    while (n1 % i == 0 && n2 % i == 0) {
        return (i);
        i--;
    }
    
}
