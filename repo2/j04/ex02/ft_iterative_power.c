/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:35:42 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 11:35:45 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  int i;
  int num;

  num = 1;
  i = 0;
  while (i < power) {
    num *= nb;
    i++;
  }
  return (num);
}

int main()
{
  int num;

  num = ft_iterative_power(4, 3);
  printf("\n111:  %d", num);
  return (0);
}

