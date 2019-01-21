#include <stdio.h>

int main()
{
  char str[] = "abcde";
  char *p1;
  char **p2;
  
  p1 = str;
  p2 = &p1;

  printf("\n111:  %s", str);
  printf("\n111:  %c", *p1);
  printf("\n111:  %c", **p2);
  printf("\n111:  %s", str);
  printf("\n111:  %s", str);

  /*
    note, pointer to a pointer points to an address of p1.
  *p2 = *&p1 = p1;
  **p2 = *p1 = str
  */

  return (0);
}
