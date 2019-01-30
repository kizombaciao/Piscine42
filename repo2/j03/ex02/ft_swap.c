/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:49:12 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:49:20 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

}


int main()
{
  int a;
  int b;
  int *ptr1;
  int *ptr2;

  a = 1;
  b = 2;

  ptr1 = &a;
  ptr2 = &b;

  ft_swap(ptr1, ptr2);

  printf("a:  %d      b:  %d", a, b);

  return (0);

}