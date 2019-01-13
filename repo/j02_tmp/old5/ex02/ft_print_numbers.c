#include <unistd.h>

int ft_putchar(char c);

void ft_print_numbers(void)
{
  char d;
  d = '0';

  while (d <= '9')
    {
      ft_putchar(d);
      d++;
    }
}
