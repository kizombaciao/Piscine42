/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:25:15 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 11:25:23 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  if (nb <= 1) {
    return (1);
  } else {
    return (nb * ft_iterative_factorial(nb-1));
  }
}

int main()
{
  int num;

  num = ft_iterative_factorial(5);
  printf("\n111:  %d", num);
  return (0);
}

