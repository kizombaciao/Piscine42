#include<stdio.h>
#include<stdlib.h>

int main(void)
{

  char *outfile = "test42";
  char str[] = "42";

  FILE *outptr = fopen(outfile,"w");



  for (int i = 0; i < 42; i++)
  {
    fputc(0x00, outptr);
  }

  fwrite(str, sizeof(str), 1, outptr);

  fclose(outptr);

  return 0;
}
