#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  char c1;
  char c2;

  while (n-- > 0) {
    c1 = *s1++;
    c2 = *s2++;
    if (c1 != c2) {
      return (c1 - c2);
    }
    if (c1 == '\0') {
      return (0);
    }
  }
  return (0);
}

int main()
{
  char s1[] = "2355";
  char s2[] = "2355";
  int num;

  num = ft_strncmp(s1, s2, 4);
  printf("\n111:  %d", num); 

  return (0);
}
