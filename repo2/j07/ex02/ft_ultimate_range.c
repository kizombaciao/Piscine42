#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int j;
  int **p;

  /* allocate memory for the one row */
  p = (int **)malloc(1 * sizeof(int *));

  printf("\naaa");
  /* for each row, allocate memory for columns */
  j = 0;
  while (j < (max - min)) {
    *(p + j) = (int *)malloc((max - min) * sizeof(int));
    printf("\njjj  %d", j);
    j++;
  }
  printf("\nbbb");
  j = 0;
  while (j < (max - min)) {
    *(*p + j) = min + j;
    printf("\n333:  %d", *(*p + j));
    j++;
  }
  j = 0;
  while (j < (max - min)) {
    printf("\n222:  %d", *(*p + j));
    j++;
  }
  range = p;
  return (max-min);
}

int main()
{
  int i;
  int num;
  /*
  int min = -10, max = 10;
  */
  int **range;

  num = ft_ultimate_range(range, -5, 5);

  for (i = 0; i < (10) ; i++) {
    printf("\n111:  %d", *(*(range) + i));
  }
  free(range);
  return (0);
}

/*
  for (j = 0;j < (max - min); j++) {

 */
