//
//  my_strcmp.c
//  
//
//  Created by James Chao on 1/22/19.
//

#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
    while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
        p1++;
        p2++;
    }
    return (*p1 - *p2);
}
