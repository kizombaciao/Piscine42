#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int j;
  int *p;

  p = (int *)malloc((max - min) * sizeof(int));
  j = 0;
  while (j < (max - min)) {
    *(p + j) = min + j;
    printf("\n333:  %d", p[j]);
    j++;
  }
  *range = p;
  return(0);
  
}
int main()
{
  int i, num;
  int *range;  /* note, only one asterisk here */

  num = ft_ultimate_range(&range, -5, 5);  /* note, address here */
  for (i = 0; i < (10) ; i++) {
    printf("\n111:  %d", *(range + i));
  }
  free(range);
  return (0);
}
