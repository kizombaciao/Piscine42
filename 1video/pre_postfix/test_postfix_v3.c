#include <stdio.h>

// not sure why this doesn't work, given youtube video.
int main()
{
    char a[] = "12345678";
    char *p = a;
    
    printf("\n111   %p   %p", (*p)++, *p++);
    
    return 0;
}
