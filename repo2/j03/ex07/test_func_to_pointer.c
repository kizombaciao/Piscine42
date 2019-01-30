#include <stdio.h>

void fun(int a)
{
  printf("Value of a is %d\n", a);
}

int main()
{
  /* to declare a func pointer that takes int as argument */
  void (*fun_ptr)(int);

  fun_ptr = &fun;

  (*fun_ptr)(10);

  return (0);
}

