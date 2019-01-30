#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int i;
  int flag;

  flag = 0;
  i = 0;
  while (i < n) {
    if (src[i] == '\0') {
      flag = 1;
    }
    if (flag != 1) {
      *(dest + i) = *(src + i);
    } else {
      *(dest + i) = '\0';
    }
    i++;
  }
  return (dest);

}

int main()
{

  char src[] = "11111";
  char dest[] = "22";
  char *temp;

  temp = ft_strncpy(dest, src, 2);
  printf("\n111:  %s", src);
  printf("\n222:  %s", dest);

  return (0);
}
