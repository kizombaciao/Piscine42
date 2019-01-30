#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int ft_str_is_numeric(char *str);

/* test for NULL??? */
int ft_atoi(char *str)
{
  int i;
  int sign;
  int base;

  
  i = 0;
  while (str[i] == ' ') {
    i++;
  }

  sign = 1;
  if (str[i] == '-' || str[i] == '+') {
    sign = 1 - 2 * (str[i++] == '-');
  }

  base = 0;
  while (str[i]) {
    printf("\n222:  %c", str[i]);
    if (ft_str_is_numeric(&str[i]) == 0) {
        return (0);
    }
    base = base*10 + (str[i++] - '0');
  }
  return (sign * base);
}

int main()
{
  int num;

  num = ft_atoi("   + 5678");
  printf("\n111:  %d", num);
  return (0);
}
