/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:35:22 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 11:35:26 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
  if (nb <= 1) {
    return (1);
  } else {
    return (nb * ft_recursive_factorial(nb-1));
  }
}

int main()
{
  int num;
  num = ft_recursive_factorial(3);
  printf("\n111:  %d", num);
  return (0);  
}

