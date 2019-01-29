#include <stdio.h>

int main()
{
    char arr[3][30] = { "abc", "defg", "rstvu"};
    char (*p)[30] = arr;
    
    printf("\n%d", *p[0]);
    p[0]++;
    printf("\n%d", *p[0]);
    
    
    
}
