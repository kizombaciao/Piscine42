#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb(void)
{
  int i, j, k;

  i = 9;
  while (i >= 0) {
    j = i-1;
    while (j >- 0) {
      k = j-1;
      while(k >= 0) {
	ft_putchar(48+i);
	ft_putchar(48+j);
	ft_putchar(48+k);
	ft_putchar(44);
	ft_putchar(32);
	k--;
      }
      j--;
    }
    i--;
  }
}

int main()
{
  ft_print_comb();
  return (0);
}
