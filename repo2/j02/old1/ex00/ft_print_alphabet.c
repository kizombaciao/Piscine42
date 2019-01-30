#include <unistd.h>


int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_alphabet(void)
{
  char lc = 'a';

  while ( lc <= 'z' )
    {
      ft_putchar(lc);
      lc++;
    }

}


int main()
{
  ft_print_alphabet();

}
