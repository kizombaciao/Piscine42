/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 11:49:49 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 11:49:59 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
  int i;
  int j;
  int num;
  int size;
  int factor;
  int neg_flag;

  neg_flag = 0;
  size = 0;
  while (str[size] != '\0') {
    if (str[size] == 45) {
      neg_flag = 1;
    }
    size++;
  }

  if (neg_flag == 1) {
    i = 1;
  } else {
    i = 0;
  }

  num = 0;
  while (i < size && str[i] >= 48 && str[i] <= 57) {
    j = 0;
    factor = 1;
    while (j < (size - i -1)) {
      factor *= 10;
      j++;
    }
    num += (str[i]-48)*factor;
    i++;
  }

  if (neg_flag == 1) {
    return(-num);
  } else {
    return (num);
  }
}
