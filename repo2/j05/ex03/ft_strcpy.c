#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;

  while (src[i]) {

    *(dest + i) = *(src + i);
    i++;
  }
  *(dest + i) = '\0';

  return (dest);
}

/* what if dest is smaller than src? error check? */

int main()
{
  char src[] = "what happened";
  char dest[] = "learn c today";
  char *temp;

  temp = ft_strcpy(dest, src);
  printf("\n111:  %s", src);
  printf("\n222:  %s", dest);
  return (0);
}
