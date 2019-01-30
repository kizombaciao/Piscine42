#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_comb2(void)
{
  int i, j, count=0;

  i = 0;
  while (i <= 98) {
    j = i + 1;
    while (j <= 99) {
      count++;
      
      ft_putchar(i/10+48);
      ft_putchar((i%10)+48);

      ft_putchar(32);

      ft_putchar(j/10+48);
      ft_putchar((j%10)+48);

      ft_putchar(44);
      ft_putchar(32);
      j++;
    }
    i++;
  }
  printf("\n Count:  %d", count);
}

int main()
{
  ft_print_comb2();
  return (0);
}
