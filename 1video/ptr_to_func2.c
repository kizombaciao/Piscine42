#include <unistd.h>

typedef void (*funptr)(char);

void ft_putchar(char c)
{
  write(1, &c, 1);
  return;
}

int main()
{
  /*
    With typedef:
    funptr f;
    instead of the below line.
    ??? not sure why it works.
   */

  void (*f)(char);

  f = &ft_putchar;
  f('Z');
  return (0);
}
