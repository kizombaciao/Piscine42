#include <stdio.h>
#include <stdlib.h>

void allocate(int **p)
{
    *p = (int *)malloc(sizeof(int));
}

int main()
{
    int *p = NULL;
    
    allocate(&p); // because &p is what a **p would contain
    *p = 42;
    free(p);
}

