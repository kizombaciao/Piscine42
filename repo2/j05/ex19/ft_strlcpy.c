#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  int i;
  int j;

  i = 0;
  while (dest[i]) {
    i++;
  }

  j = 0;
  while (src[j] && j < nb) {
    dest[i + j] = src[j];
    printf("\n222:  %d", j);
    j++;
    dest[i + j] = '\0';
  }
  /* i placed '\0' in every case */

  /*
  if (j-1 < nb) {
    dest[i+j] = '\0';
  }
  */
  return (dest);
}

int main()
{
  char src[] = "abcd";
  char dest[] = "efgj";
  char *str;

  str = ft_strncat(dest, src, 2);
  printf("\n111:  %s", str);

  return (0);
}
