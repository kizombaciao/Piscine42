#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return(0);
}

void ft_putnbr(int nb)
{
  int temp = nb;
  /*int d1;
    int d2;
  */
  /*
  if (nb >= 10) {
    d1 = nb / 10;
    d2 = nb % 10;
  
    printf("\n\nd1:   %d", d1);
    printf("\n\nd2:   %d", d2);
  }
  */

  ft_putchar(nb/10+48);
  ft_putchar(nb%10+48);

  while (temp%10
  
}


int main()
{
  ft_putnbr(142);
  return (0);
}
