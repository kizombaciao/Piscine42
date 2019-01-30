#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

char *ft_strdup(char *src)
{
    char *str;
    int i;

    str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));

    if (str != NULL) {
    
        i = 0;
        while (i < ft_strlen(src)) {
            str[i] = src[i];
            i++;
        }
        str[i] = '\0';
        return (str);
    } else {
        return (NULL);
    }
}
int main()
{
  char temp[100];
  char *p;

  p = ft_strdup("tessfsdfsdft");

  printf("\n222:  %s", p);
  free(p);

  return (0);
}
