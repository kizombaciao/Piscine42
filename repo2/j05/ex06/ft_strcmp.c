#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
  char c1;
  char c2;

  c1 = *s1++;
  c2 = *s2++;
  printf("\n222:  %c", c1);
  printf("\n222:  %c", c2);
  if (c1 == '\0') {
      return (c1 - c2);
  }    
  while (c1 == c2) {
    c1 = *s1++;
    c2 = *s2++;
    printf("\n333:  %c", c1);
    printf("\n333:  %c", c2);

    if (c1 == '\0') {
      return (c1 - c2);
    } 
  }
  return (c1 - c2);
}

/* what if s1 is longer than s2??? */

int main()
{
  char s1[] = "2354";
  char s2[] = "2355";
  int num;

  num = ft_strcmp(s1, s2);
  printf("\n111:  %d", num);

  return (0);
}
