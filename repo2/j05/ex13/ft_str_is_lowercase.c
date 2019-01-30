#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i]) {

    if (str[i] <= 96 || str[i] >= 123) {
      return (0);
    }
    i++;
  }
  return (1);
}


int main()
{
  int num;

  num = ft_str_is_lowercase("st");
  printf("\n111:  %d", num);
  return (0);
}
