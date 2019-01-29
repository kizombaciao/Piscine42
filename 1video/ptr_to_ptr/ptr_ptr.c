// USEFUL!
#include <stdio.h>

void setToZero(short **);

int main()
{
    short a[3] = {1245, 1924, 234};
    short b[3] = {24, 256, 11};
    // short *t[2] = {a, b}; // array that contains 2 addresses
    short *(*t)[3] = {a, b};
    
    setToZero(t);
    return 0;
}
// the key is to think of t[][] as array of pointers
void setToZero(short **t)
{
    *(*t) = 0; // what is pointed by what is pointed by t
    *((*t) + 1) = 0; // same as a[1] = t[0][1]
    *((*t) + 2) = 0; // a[2] = t[0][2] = *(t[0] + 2)
    
    *(*(t + 1) + 0) = 11; // can i say t[i][j]?
    printf("\n111:  %d", t[1][0]);
    
    *(*(t + 1) + 1) = 22; // note, this works too!
    printf("\n111:  %d", *(t[1] + 1));
}
