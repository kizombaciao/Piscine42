#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  while (*(str + i)) {
    printf("\n222:  %s", (str + i));
    if ((*(str + i) > 64) && (*(str + i) < 91)) {
      *(str + i) += 32;
    } 
    i++;
  }
  return (str);
}

int main()
{
  char s1[] = "CREATE";
  char *p;
  
  p = ft_strlowcase(s1);
  printf("\n111:  %s", p);

  return (0);
}
