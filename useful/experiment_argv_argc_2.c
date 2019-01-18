

void ft_putchar(char c);

int main(int argc, char **argv)
{
  int i;

  i = 0;
  while (i < argc) {
    ft_putchar(**(argv + i)); /* unclear why this pointer works */
    i++;
  }
  return (0);
}
