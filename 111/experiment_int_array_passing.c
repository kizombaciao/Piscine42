#include <stdlib.h>
#include <stdio.h>

void test(int *t1, int len)
{
  int i;

  for (i=0; i<len; i++) {
    t1[i] = i;
  }
}

int main()
{
  int t1[100];
  int *p;
  int len = 10, i;

  p = t1;

  test(t1, len);
  for (i=0; i<len; i++) {
    printf("\n111:  %d", t1[i]);
  }
  return (0);
}
