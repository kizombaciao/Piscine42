#include <unistd.h>
#include <stdio.h>

/*
int atoi(char *str)
{

}
*/




void sastantua(int size)
{
  int i;
  int stack_height[size];
  int total_height;
  int step_width[1000]; /* use malloc */

  /* find total height */
  /* find each stack height */
  i = 0;
  total_height = 0;
  while (i < size) {
    stack_height[i] = i + 3;
    total_height += i + 3;
    i++;
  }

  printf("\n111:  %d", total_height);

  step_width[0] = 3;
  i = 1;
  while (i < total_height) {
    step_width[i] = 
    i++;
  }

}

int main()
{

  sastantua(5);
  return (0);
}
