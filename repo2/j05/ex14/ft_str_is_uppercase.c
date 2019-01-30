#include <unistd.h>
#include <stdio.h>


int ft_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  while (str[i]) {
    if (str[i] <= 64 || str[i] >= 91) {
      return (0);
    }
    i++;
  }

  return (1);
}

int main()
{
  int num;

  num = ft_str_is_uppercase("");
  printf("\n111:  %d", num);
  return (0);
}
