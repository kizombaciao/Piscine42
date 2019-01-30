#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

char *ft_strcapitalize(char *str)
{
  int i;
  int flag;

  i = 0;
  flag = 1;
  str = ft_strlowcase(str);

  while (str[i]) {

    i++;
  }
  return (str);
}

int main()
{
  char s1[] = "what is the weather today?";
  char *p;
  /*
  p = ft_strcapitalize(s1);
  */
  printf("\n111:  %s", p);
  return (0);
}
