#include <stdio.h>

void ft_putchar(char c);

int main(int argc, char **argv)
{

  while (*(*(argv+0))) {
    ft_putchar(*(*(argv+0))++);  /* why does ++ work outside of paren?  */
  }
  return (0);
}
