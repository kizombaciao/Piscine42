#include <stdio.h>




int main()
{
  int i, j, k = 2;
  int b[2][3];
  int *p1;
  int **p2;
  int (*p)[3] = b;
  
  for (i=0;i<2;i++) {
    for (j=0;j<3;j++) {
      b[i][j] = k;
      k++;
      printf("\n111:  %d", b[i][j]);
    }
  }
  for (i=0;i<2;i++) {
    for (j=0;j<3;j++) {
      printf("\n222:  %d", *(*(p+i)+j));
    }
  }


  /*
  printf("\n222: %d",*(*(p2 + 1) +1)); 
  */

  return (0);
}


