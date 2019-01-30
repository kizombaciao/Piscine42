#include <stdio.h>

int main()
{
  /* "" = NULL */
  char str[] = "";

/* is this the same as str[0]??? */
/* yes!!! */

if (*str == '\0') {
  printf("\n111:   ");
 }
if (str[0] == '\0') {
  printf("\n222:   ");
 }




}
