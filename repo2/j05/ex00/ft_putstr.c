#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c);

void ft_putstr(char *str)
{
  int i;

  while (str[i]) {
    ft_putchar(str[i]);
    i++;
  }

  printf("\n222:  %s", str);
}

int main()
{
  char str[100] = "abc";

  printf("\n111:  %s\n", str);
  ft_putstr("test");
  return (0);
}
