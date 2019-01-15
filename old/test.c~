#include <unistd.h>
#include <stdio.h>

char g_t_left = '/';
char g_t_right = '\\';
char g_b_left = '\\';
char g_b_right = '/';
char g_h_side = '-';
char g_v_side = '|';
char g_space = ' ';

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void rush00(int width, int height)
{
  int i;
  int j;
  
  /* 1st Row */
  i = 0;
  while (i < width) {
    if (i == 0) {
      ft_putchar(g_t_left);
    } else if (i == (width - 1)) {
      ft_putchar(g_t_right);      
    } else {
      ft_putchar(g_h_side);
    }

    i++;
  }

  ft_putchar(10);

  /* middle */
  j = 0;
  while (j < height - 2) {
    /* print row */
    i = 0;
    while (i < width) {
      if (i == 0 || i == (width - 1)) {
        ft_putchar(g_v_side);
      } else {
        ft_putchar(g_space);
      }
      i++;
    }
    ft_putchar(10);
    j++;
  }

  /* last row */
  if (height > 1) {
    i = 0;
    while (i < width) {
      if (i == 0) {
        ft_putchar(g_b_left);
      } else if (i == (width - 1)) {
        ft_putchar(g_b_right);
      } else {
        ft_putchar(g_h_side);
      }
      i++;
    }
  }

  /* return line */
  ft_putchar(10);
}

int main()
{
  rush00(5, 5);
  return (0);
}
