//
//  test_double_ptr.c
//  
//
//  Created by James Chao on 1/21/19.
//

#include <stdio.h>

void func(int **p)
{
    printf("\n222:  %d", *(*(p +1)+2));

    
}


int main()
{
    int b[2][3] = { {1,2,3}, {4,5,6}};
    int (*p)[3] = b;
    
    printf("\n111:  %d", *(*(p +1)+1));
    func(&b[0][0]);
    
}
