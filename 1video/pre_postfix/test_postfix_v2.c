#include <stdio.h>

// not sure why this doesn't work, given youtube video.
int main()
{
    char a[] = "12345678";
    char *p = a;
    
    printf("\n111   %p   %p", ++&a[0], &a[0]++);
    
    return 0;
}
