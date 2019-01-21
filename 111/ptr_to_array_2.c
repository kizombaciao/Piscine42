#include <stdio.h>

int main()
{
  int arr[] = {3, 5, 6, 7, 9};
  int *p = arr;
  /* ptr to array of 5 integers */
  int (*ptr)[5] = &arr;
  int **ptr2;

  ptr2 =


  p = arr;
  ptr = &arr;

  printf("\n111:  %p,  %p   ", p, ptr);
  printf("\n111:  %d,  %p   ", *p, *ptr);


  printf("\n222:  %p,  %p  ", p, ptr);

  return (0);
}
