/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:56:14 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:56:17 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int temp1;
  int temp2;

  temp1 = *(a) / *(b);
  temp2 = *(a) % *(b);

  *(a) = temp1;
  *(b) = temp2;

}

int main()
{
  int vala;
  int valb;

  int *a;
  int *b;

  vala = 10;
  valb = 3;

  ft_ultimate_div_mod(&vala, &valb);

  printf("\n111:  %d", vala);
  printf("\n111:  %d", valb);

  return (0);
}
