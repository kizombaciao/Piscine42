#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb(void)
{
  int i, j, k;
  int count = 0;

  i = 0;
  while (i <= 9) {
    j = i + 1;
    while (j <= 8) {
      k = j + 1;
      while (k <= 9) {
	ft_putchar(48+i);
	ft_putchar(48+j);
	ft_putchar(48+k);
	k++;
	count++;
	if (count < 120) {
	  ft_putchar(44);
	  ft_putchar(32);
	}
      }
      j++;
    }
    i++;
  }
}

int main()
{
  ft_print_comb();
  return (0);
}
