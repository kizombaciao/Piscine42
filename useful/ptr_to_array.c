#include <stdio.h>

int main()
{
  int arr[5];
  int *p;
  /* ptr to array of 5 integers */
  int (*ptr)[5];


  p = arr;
  ptr = &arr;

  printf("\n111:  %p,  %p   ", p, ptr);

  p++;
  ptr++;

  printf("\n222:  %p,  %p  ", p, ptr);

  return (0);
}
