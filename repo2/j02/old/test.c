#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_numbers(void)
{
  char d = '0';

  while (d <= '9')
    {
      ft_putchar(d);
      d++;
    }
}

int main()
{
  ft_print_numbers();
  return (0);
}
