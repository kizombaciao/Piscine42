#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i]) {
    if (str[i] <= 64 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123) {
      return (0);
    }
    i++;
  }
  return (1);
}

/* why is this legal? does func make a copy? */
/* it is because the func is doing read only */

int main()
{
  char s1[10];
  int num;

  num = ft_str_is_alpha("abc");
  printf("\n111:  %d", num);
  return (0);
}
