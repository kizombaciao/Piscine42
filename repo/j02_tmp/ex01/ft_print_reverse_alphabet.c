#include <unistd.h>

int ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
  char lc;

  lc = 'z';
  while (lc >= 'a')
    {
      ft_putchar(lc);
      lc--;
    }
}
