#include <stdlib.h>
#include <stdio.h>

/*
Create a function that transforms arguments given as command-line into a single string of characters. Those arguments should be separated by a "\n".
 */

int ft_strlen(char *str);

/* char * */
char *ft_concat_params(int argc, char **argv)
{
  char *p;
  int i;
  int j;
  int size;

  /* argc = 6 */

  size = 0;
  i = 1;
  while (i < argc) {
    size += ft_strlen(*(argv + i));
    printf("\n777:  %d", i);
    i++;
  }
  printf("\n222:  %d", size);
  p = (char *)malloc(sizeof(*p)*(size + (argc - 1)));
  printf("\n555:  %d", ft_strlen(p));

  size = 0;
  i = 1;
  while (i < argc) {
    j = 0;
    while (j < ft_strlen(*(argv + i))) {
      *(p + size) = *(*(argv + i) + j);
      j++;
      size++;
    }
    if (i < argc - 1) {
      *(p + size) = '\n';
    } else {
      *(p + size) = '\0';      
    }
    printf("\n444:  %d   %s", size, (p+size-3));
    size++;
    i++;
  }

  /*
  free(p);
  */
  return(p);


}


int main(int argc, char **argv)
{
  char *p;

  p = ft_concat_params(argc, argv);

  printf("\n333:  %s", p);

  return (0);
}
