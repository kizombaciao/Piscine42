#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;
  int size_str;
  int size_to_find;
  int flag;

  i = 0;
  while (str[i]) {
    i++;
  }
  size_str = i;
  printf("\n777:  %d", size_str);

  j = 0;
  while (to_find[j]) {
    j++;
  }
  size_to_find = j;
  printf("\n888:  %d", size_to_find);

  i = 0;
  while (i <= size_str - size_to_find) {
    j = 0;
    flag = 1;
    while (j < size_to_find) {
      if (to_find[j] != str[i+j]) {
        flag = 0;
        printf("\n999:  %s", &str[i+j]);
      }
      j++;
      printf("\nFLAG:  %d", flag);
    }
    if (flag == 1) {
      printf("\n555:  %s", &str[i]);
      return (&str[i]);
    }
    printf("\nIII:  %d", i);
    i++;

  }
  return (NULL);
}

int main()
{
  char haystack[] = "111222333";
  char needle[] = "111";
  char *temp;

  temp = ft_strstr(haystack, needle);
  printf("\n111:  %s", temp);

  return (0);
}
