//
//  test_ptr_ptr_int.c
//  
//
//  Created by James Chao on 1/23/19.
//

#include <stdio.h>

int main()
{
    int num;
    int *p;
    int **q;
    
    q = &p;
    p = &num;
    num = 11;
    
    printf("\n11  Content of num:  %d", num);
    printf("\n11  Content of num:  %d", *p);
    printf("\n11  Content of num:  %d", **q);
    
    printf("\na3  Address of num:  %p", &num);
    printf("\na3  Content in p:  %p", p);
    printf("\n*         q:       %p", *q);
    
    printf("\na2  Address of p:  %p", &p);
    printf("\na2  Content in q:  %p", q);
    
    printf("\nAddress of q:  %p", &q);
}

/*
 printf("\nAddress of num:  %d", **q);
 printf("\nContent of num:  %d", *p);
 */
