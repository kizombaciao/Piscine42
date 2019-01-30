#include <unistd.h>
#include <stdio.h>

int main()
{
  char src[50] = "abcd";
  int i = 0;

  while (src[i] != '\0') {
    i++;
  }

  if (src[i] == '\0') {
    printf("\n111:  %d", i);
  }

  return (0);
}

/* in both cases, 4 is the location of '\0' */
