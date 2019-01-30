#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i]) {
    if (str[i] <= 31) {
      return (0);
    }
    i++;
  }

  return (1);
}

/* how do i test for non-printable? */

int main()
{
  int num;
  /*
  char s1[] = NULL;
  char *p;
  */

  num = ft_str_is_printable("\n");
  printf("\n111:  %d", num);
  return (0);
}
