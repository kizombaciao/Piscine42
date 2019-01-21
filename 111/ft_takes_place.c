//
//  ft_takes_place.c
//  
//
//  Created by James Chao on 1/18/19.
//

#include <stdio.h>


void     ft_takes_place(int hour)
{
    int    y;
    printf("\nTHE FOLLOWING TAKES PLACE BETWEEN");
    if (hour == 24)
    {
        hour == 0;
    }
    if (hour < 12)
    {
        y = hour + 1;
        printf(" %d.00 A.M. AND %d.00 A.M.",hour,y);
    }
    else
    {
        hour = hour - 12;
        y = hour + 1;
        printf(" %d.00 P.M. AND %d.00 P.M.",hour,y);
    }
}
