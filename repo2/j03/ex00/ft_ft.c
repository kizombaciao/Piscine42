/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:44:27 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:44:33 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
  *nbr = 42;

  printf("111:  %d", *nbr);
}

int main()
{
  int value;
  int *ptr;

  ptr = &value;

  ft_ft(ptr);
  printf("222:  %d", value);

  return (0);
}

