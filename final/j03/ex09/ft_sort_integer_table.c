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

void ft_sort_integer_table(int *tab, int size)
{
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
}
