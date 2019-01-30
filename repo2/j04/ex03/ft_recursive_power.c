/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:36:10 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 11:36:14 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
  if (power <= 1) {
    return (nb);
  } else {
    return (nb * ft_recursive_power(nb, power-1));
  }
}

int main()
{
  int num;

  num = ft_recursive_power(4, 3);
  printf("\n111:  %d", num);
  return (0);
}

