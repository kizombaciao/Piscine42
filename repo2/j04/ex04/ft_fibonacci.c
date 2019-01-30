/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:36:32 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 11:36:35 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_fibonacci(int index)
{
  if (index < 0) {
    return (-1);
  } else if (index <= 1) {
    return (index);
  }
  return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}

int main()
{
  int num;

  num = ft_fibonacci(0);
  printf("\n111:  %d", num);
  return (0);
}

