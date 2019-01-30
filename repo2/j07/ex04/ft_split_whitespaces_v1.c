#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

int my_delimit(char c)
{
  if (c == ' ' || c == '\t' || c == '\n') {
    return(1);
  } else {
    return(0);
  }
}

char **ft_split_whitespaces(char *str)
{
  int i;
  int j;
  int k;
  int num_words;
  int len_word[100];
  int temp;
  int len;
  char *p;
  char **arr;
  
  /* need to know how many distinct words before 2-d array
   */

  i = 0;
  j = 0;
  temp = 0;
  while (str[i]) {
    if (my_delimit(str[i])) {
      printf("\nIII:  %d", i);
      len_word[j] = i - temp;
      temp = i+1;
      printf("\n333:  %d   %d   %d", i, j, len_word[j]);
      j++;
    }

    i++;
  }
  num_words = j+1;
  len_word[j] = i - temp; 
  printf("\n222:  %d    %d", num_words, len_word[j]);

  arr = (char **)malloc((num_words + 1) * sizeof(char *));
  j = 0;
  while (j < num_words) {
    arr[j] = (char *)malloc((len_word[j] + 1) * sizeof(char));
    j++;
  }

  k = 0;
  i = 0;
  while (i <= num_words) {
    
    j = 0;
    if (i == num_words) {
      arr[i][j] = '0';
      printf("\nINNER:  %d  %d  %c", i, j, arr[i][j]);
    } else {
      while (j <= len_word[i]) {
        if (j == len_word[i]) {
	arr[i][j] = '\0';
        } else {
	arr[i][j] = str[k];
        }
        printf("\nINNER:  %d  %d  %c", i, j, arr[i][j]);
        j++;
        k++;
      }
    }
   i++;
  }
  /*
  len = ft_strlen(str);
  arr = (char **)malloc(sizeof(char *)(len + 1));
  */
  return(arr);
}
/*
int main()
{
  char str[] = "123\t456\n789 12345678";
  char **p;
  
  printf("\n111:  %d", ft_strlen(str));
  p = ft_split_whitespaces(str);
  return (0);
}
*/
