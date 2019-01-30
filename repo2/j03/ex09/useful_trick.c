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
  int temp;

  printf("\n111:  %d", tab[2]);

  i = 0;
  j = size-1;

  while (i < j) {
    temp = tab[j];
    tab[j] = tab[i];
    tab[i] = temp;
    i++;
    j--;
  }
  
  for (i=0; i<size; i++) {
    printf("\n222:  %d", tab[i]);

  }

}


int main()
{
  int tab[] = {3, 2, 1, 4, 5};
  int size;

  size = 5;
  ft_sort_integer_table(tab, size);
  return (0);
}


