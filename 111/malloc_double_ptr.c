#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r = 3, c = 4, len = 0;
  int *ptr, **arr;
  int i, j, count = 0;

  /* 
     creating a 2-day array, where the outside ptr points to an array of ptrs.
   */

  len = sizeof(int *) * r + sizeof(int) * c * r;
  arr = (int **)malloc(len);

  /* 
     ??? ptr is now pointing to the 1st element in the 2D array.
   */
  /*
  ptr = arr + r;
  */

  /*
    for loop to point rows pointer to appropriate location in 2D array
   */
  for ( i=0 ; i<r ; i++ ) {
    arr[i] = (ptr + c * i);
  }

  for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
      arr[i][j] = ++count;
    }
  }

  for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
      printf("%d  ", arr[i][j]);    
    }   
  }  
  return (0);
}

/*

  int **arr = (int **)malloc(r * sizeof(int *));
  for (i=0;i<r;i++) {
    arr[i] = (int *)malloc(c * sizeof(int));
  }

  count = 0;
  for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
      arr[i][j] = ++count;
    }
  }

  for (i = 0; i<r; i++) {
    for (j = 0; j<c; j++) {
      printf("%d  ", arr[i][j]);
    }
  }

*/
