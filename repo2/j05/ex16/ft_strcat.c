#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
  int i;
  int j;

  i = 0;
  while (dest[i]) {
    i++;
  }
  printf("\nMAX:  %d", i);
  printf("\n999:  %s", dest);    

  j = 0;
  while (src[j]) {
    dest[i+j] = src[j];
    dest[i+j+1] = '\0';
    printf("\n222:  %s", dest);    
    printf("\n444:  %d", j);
    printf("\n333:  %c", src[j]);
    j++;
  }
  return (dest);
}

int main()
{
  char src[] = "abcd";
  char dest[] = "efgj";
  char *str;

  str = ft_strcat(dest, src);

  printf("\n111:  %s", str);
  return (0);
}
