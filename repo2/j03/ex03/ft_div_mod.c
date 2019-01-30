/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:50:17 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:50:22 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a/b;
  *mod = a%b;
}


int main()
{
  int a;
  int b;
  int *ptr1;
  int *ptr2;
  int v1;
  int v2;

  a = 10;
  b = 3;

  ptr1 = &v1;
  ptr2 = &v2;
  
  ft_div_mod(a, b, ptr1, ptr2);
  printf("DIV:  %d     MOD:  %d", v1, v2);
  return (0);
}
