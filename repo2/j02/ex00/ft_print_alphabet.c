#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
  char lc;

  lc = 'a';
  while (lc <= 'z')
    {
      ft_putchar(lc);
      lc++;
    }
}
