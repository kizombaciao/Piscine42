#include <unistd.h>
#include <stdio.h>

/* this shows that strings without memory don't work */

void ft_strupcase(char *str)
{
  int i;

  str[2] = '2';
}

int main()
{
  char s1[] = "what happened?";

  char *p;

  ft_strupcase("hello");
  printf("\n111:  %s", s1);
  return (0);
}
