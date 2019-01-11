#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_combn(int n)
{  
  int i[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};


  while (i[8] <= 9) {
    while (i[7] <= 9) {
      while (i[6] <= 9) {
	while (i[5] <= 9) {
	  while (i[4] <= 9) {
	    while (i[3] <= 9) {
	      while (i[2] <= 9) {
		while (i[1] <= 9) {
		  while (i[0] <= 9) {
		    if ( n >= 9 ) {
		      ft_putchar(i[8] + 48);	
		    }
		    if ( n >= 8 ) {
		      ft_putchar(i[7] + 48);	
		    }
		    if ( n >= 7 ) {
		      ft_putchar(i[6] + 48);	
		    }
		    if ( n >= 6 ) {
		      ft_putchar(i[5] + 48);	
		    }
		    if ( n >= 5 ) {
		      ft_putchar(i[4] + 48);	
		    }
		    if ( n >= 4 ) {
		      ft_putchar(i[3] + 48);	
		    }
		    if ( n >= 3 ) {
		      ft_putchar(i[2] + 48);	
		    }
		    if ( n >= 2 ) {
		      ft_putchar(i[1] + 48);
		    }
		    if ( n >= 1 ) {
		      ft_putchar(i[0] + 48);
		    }
		    ft_putchar(10);
		    i[0]++;
		  }
		  i[0] = 0;
		  i[1]++;
		}
		i[1] = 0;
		i[2]++;
	      }
	      i[2] = 0;
	      i[3]++;  
	    }
	    i[3] = 0;
	    i[4]++;
	  }
	  i[4] = 0;
	  i[5]++;  
	}
	i[5] = 0;
	i[6]++;  
      }  
      i[6] = 0;
      i[7]++;  
    }
    i[7] = 0;
    i[8]++;  
  }
}

int main()
{
  ft_print_combn(2);
  return (0);
}
