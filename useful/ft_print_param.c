void ft_putchar(char c);

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 1;
  while (i < argc) {
    j = 0;
    while (*(argv[i]+j)) {
      ft_putchar(argv[i][j]);      
      j++;
    }
    ft_putchar(10);
    i++;
  }
  return (0);
}
