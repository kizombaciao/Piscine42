#include <stdlib.h>
#include <stdio.h>


/* 
Create a function ft_range which returns an array ofints. This int array should contain all values between min and max.
 */

int *ft_range(int min, int max)
{
  int i;
  int *p;

  /* does malloc return pointer to 0th element
     or to the entire array?
     Do int array need the null?
   */

  p = (int *)malloc(sizeof(*p) * (max - min));
  i = 0;
  while (i < (max - min)) {
    *(p + i) = min + i;
    /*
    (*p)[i] = min + i;
    */
    i++;
  }
  return (p);

}

int main()
{
  int i;
  int *p;

  p = ft_range(-10, 10);
  for (i=0;i<(20);i++) {
    printf("\n111:  %d", *(p + i));
  }

  return (0);
}
