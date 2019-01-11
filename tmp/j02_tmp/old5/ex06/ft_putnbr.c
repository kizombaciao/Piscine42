#include <unistd.h>

int ft_putchar(char c);

void ft_putnbr(int nb)
{
  int temp;
  int arr[100];
  int i; 
  int j;

  temp = nb;
  i = 0;
  j = 0;

  if (temp == 0) {
    ft_putchar(48);
  } else {
    while (temp != 0) {
      arr[i] = temp%10;
      temp = temp -  arr[i];
      temp = temp / 10;
      i++;
    }
    
    j = i-1;
    while (j >= 0) {
      ft_putchar(arr[j]+48);
      j--;
    }
  }
}
