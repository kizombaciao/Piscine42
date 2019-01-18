#include <stdio.h>

/* note double pointer points to the address 
that holds the address of the string*/

/* not clear why *argv[] is same as ** argv */

int main(int argc, char *argv[])
{
  int i;
  /*
  for (i=0;i<argc;i++) {
*/
  i = 0;
  while (argv[i]) {
    printf("argv[%d]:  %s\n", i, argv[i]);
    i++;
  }
  return (0);
}

