#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return(0);
}

void ft_putnbr(int nb)
{
  int temp;
  int arr[100];
  int i;
  int j;

  temp = nb;
  if (temp == 0) {
    ft_putchar(48);
  } else if ( temp > 0 ) {
    i = 0;
    while (temp != 0) {
      arr[i] = temp%10;
      temp -= arr[i];
      temp = temp / 10;
      i++;
    }
    j = i-1;
    while (j >= 0) {
      ft_putchar(arr[j]+48);
      j--;
    }
  } else {
    temp *= -1;
    i = 0;
    while (temp != 0) {
      arr[i] = temp%10;
      temp -= arr[i];
      temp = temp / 10;
      i++;
    }
    j = i-1;
    ft_putchar(45);
    while (j >= 0) {
      ft_putchar(arr[j]+48);
      j--;
    }
  }
}

int main()
{
  ft_putnbr(42);
  return (0);
}
