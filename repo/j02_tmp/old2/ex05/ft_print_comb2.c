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

  for (i = 99; i >= 0; i--) {
    for (j = i-1; j >= 0; j--) {
      /*printf("\n%d %d >>> %d %d >>> %d %d\n", i,j, i/10+48, (i%10)+48, j/10+48, (j%10)+48);*/
      /*printf("\n%d %d\n", i,j);*/ 
      count++;
      
      ft_putchar(i/10+48);
      ft_putchar((i%10)+48);

      ft_putchar(32);

      ft_putchar(j/10+48);
      ft_putchar((j%10)+48);

      ft_putchar(10);
    }
  }
  /*printf("\n\nCount:  %d\n", count);*/
}

int main()
{
  ft_print_comb2();
  return (0);
}
