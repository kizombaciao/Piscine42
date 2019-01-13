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
  int arr[100];
  int i,j = 0;

  while (temp != 0) {
    arr[i] = temp%10;
    temp = temp -  arr[i];
    temp = temp / 10;
    i++;
    /*    printf("\ntemp: %d >>> i: %d", temp, i);*/
  }
  
  j = i-1;

  ft_putchar(10);
  while (j >= 0) {
    
    ft_putchar(arr[j]+48);
    /*printf("\n%d", arr[j]+48);*/
    j--;
  }
  ft_putchar(10);
}

int main()
{
  ft_putnbr(5140);
  return (0);
}
