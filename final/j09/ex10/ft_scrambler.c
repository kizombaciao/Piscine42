#include <stdio.h>

void ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
    *******c = ***a;

}

int main()
{
    int a1 = 1;
    int b1 = 2;
    int c1 = 3;
    int d4 = 4;
    int ***a;
    int *b;
    int *******c;
    int ****d;
    
    
    
    **a = &a1;
    b = &b1;
    ******c = &c1;
    ***d = &d4;
    
    ft_scrambler(a, b, c, d);
    printf("\n111:  %d", ***a);
}

/*
 This function will put a in c; c in d;d in b;and b in a.
 */
