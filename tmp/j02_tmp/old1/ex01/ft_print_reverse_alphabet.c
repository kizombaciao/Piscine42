#include <unistd.h>

/* write function takes a pointer */

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}


void ft_print_reverse_alphabet(void)
{
  char lc = 'z';

  while (lc >= 'a')
    {
      ft_putchar(lc);
      lc--;
    }

}

int main()
{
  ft_print_reverse_alphabet();
  return (0);
}
