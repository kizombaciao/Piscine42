#include <unistd.h>
#include <stdio.h>


int ft_putchar(char c);

void ft_putnbr(int nb)
{
  int i;
  int num[50];

  if (nb < 0) {
    ft_putchar('-');
    nb *= -1;
  }

  i = 0;
  while (nb != 0) {
    num[i] = nb%10;
    nb = nb / 10;
    i++;
  }

  while (i > 0) {
    ft_putchar(num[i-1] + 48);
    i--;
  }
}

int main()
{
  ft_putnbr(-679);
  return (0);
}


