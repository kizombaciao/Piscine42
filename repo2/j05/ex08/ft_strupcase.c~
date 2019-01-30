#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
  int i;
  
  i = 0;
  while (*(str + i)) {
    if (*(str + i) > 96 && *(str + i) < 123) {
      *(str + i) -= 32;
    }
    i++;
  }
  return (str);
}

/* am i not passing an address to the function? */
/* why when i replace p with s1, it no longer works? */

int main()
{
  char s1[] = "what happened?";

  char *p;

  p = ft_strupcase(s1);
  printf("\n111:  %s", p);
  return (0);
}
