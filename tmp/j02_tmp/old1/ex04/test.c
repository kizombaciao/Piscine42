#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb(void)
{
  int i, j, k, count = 0;

  for (i = 9; i >= 0; i--) {
    for (j = i-1; j >= 0; j--) {
      for (k = j-1; k >= 0; k--) {

	printf("\n%d%d%d\n", i,j,k);
	ft_putchar(48+i);
	ft_putchar(48+j);
	ft_putchar(48+k);
	count++;
      }
    }
  }
  printf("\nCount:  %d\n", count);
}

int main()
{
  ft_print_comb();
  return (0);
}
