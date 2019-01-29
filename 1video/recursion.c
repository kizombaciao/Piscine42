#include <unistd.h>
#include <stdio.h>

int fn(int i)
{
  if (i <= 5) {
    i += 1;
    write(1, "D", 1);
    fn(i);
    write(1, "F", 1);
    printf("\n111  %d", i);
    return (0);
  } else {
    return (0);
  }
}

int main()
{
  fn(0);
  return (0);
}
