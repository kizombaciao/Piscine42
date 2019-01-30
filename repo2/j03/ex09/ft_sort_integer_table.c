/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:16:29 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:16:33 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
  int i;
  int j;
  int k;
  int temp;

  j = 0;
  while (j < size) {
    k = j + 1;
    while (k < size) {
      if (tab[j] > tab[k]) {
	  temp = tab[j];
	  tab[j] = tab[k];
	  tab[k] = temp;
	}
      k++;
    }
    j++;
  }

  for (i=0; i<size; i++) {
    printf("\n222:  %d", tab[i]);
  }

}


int main()
{
  int tab[] = {3, 2, 1, 4, 5, 3, 0, 24};
  int size;

  size = 8;
  ft_sort_integer_table(tab, size);
  return (0);
}


