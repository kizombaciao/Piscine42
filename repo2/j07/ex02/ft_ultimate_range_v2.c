#include <stdlib.h>
#include <stdio.h>

/*
  not sure why this doesn't work.
  just replaced p with range.
 */


int ft_ultimate_range(int **range, int min, int max)
{
  int j;



  if (min >= max) {
    **range = '\0';
    return (0);
  }

  range = (int **)malloc(1 * sizeof(int *));

  printf("\naaa");
  j = 0;
  while (j < (max - min)) {
    *(range + j) = (int *)malloc((max - min) * sizeof(int));
    printf("\njjj  %d", j);
    j++;
  }
  printf("\nbbb");
  j = 0;
  while (j < (max - min)) {
    *(*range + j) = min + j;
    j++;
  }
  for (j = 0;j < (max - min); j++) {
    printf("\n222:  %d    %d", j,  *(*range + j));
  }
  return (max-min);
}


int main()
{
  int j;
  int num, min = -10, max = 10;
  int **range;

  num = ft_ultimate_range(range, min, max);
  for (j = 0; j < (max - min) ; j++) {
    printf("\n111:  %d", *(*range + j));
  }


  /*
  range = p;

  */
  return (0);
}
