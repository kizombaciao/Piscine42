#include <stdio.h>
#include <stdlib.h>

void alloc1(int *p)
{
    printf("\n111a:  %p", p);
    p = (int *)malloc(sizeof(int));
    printf("\n111b:  %p", p); // because you overwrote it???
    *p = 10;
}

void alloc2(int **p)
{
    printf("\n222a:  %p   %p", p, *p);
    *p = (int *)malloc(sizeof(int));
    // ptr to ptr now points to malloc address
    printf("\n222b:  %p   %p", p, *p);
    **p = 10;
}

int main()
{
    int *p;
    
    alloc1(p);
    printf("\nalloc1:  %d   %p", *p, p);
    
    alloc2(&p); // because &p is what a **p would contain
    printf("\nalloc2:  %d   %p", *p, p);
    // note, how p kept the address created by malloc
    free(p);
    return 0;
}

