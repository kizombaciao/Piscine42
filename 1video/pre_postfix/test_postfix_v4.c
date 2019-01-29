#include <stdio.h>

// why does this doesn't work directly in the prinf statements?
// it is because the changes need to be retained in memory.
int main()
{

    int n1, n2, n3, n4;
    int x = 0;
    
    n1 = x;
    n2 = ++x; // increments before evaluating
    x = 0;
    n3 = x++; // evaluation first before incrementing
    n4 = x; // note, x now reflects the incrementing like x += 1;
    
    printf("\n   %d  %d  %d  %d", n1, n2, n3, n4);
    // output:  0  1  0  1
    return 0;
}
