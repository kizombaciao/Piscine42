/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:47:08 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:48:16 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;

}

int main()
{
  int value;
  int *ptr1;
  int **ptr2;
  int ***ptr3;
  int ****ptr4;
  int *****ptr5;
  int ******ptr6;
  int *******ptr7;
  int ********ptr8;
  int *********ptr9;

  ptr1 = &value;
  ptr2 = &ptr1;
  ptr3 = &ptr2;
  ptr4 = &ptr3;
  ptr5 = &ptr4;
  ptr6 = &ptr5;
  ptr7 = &ptr6;
  ptr8 = &ptr7;
  ptr9 = &ptr8;

  ft_ultimate_ft(ptr9);
  
  printf("111:  %d", value);
  return (0);
}
