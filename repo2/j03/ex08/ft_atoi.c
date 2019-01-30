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

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
  int i;
  int j;
  int temp;
  int size;
  int factor;

  printf("\n111:  %s", str);

  size = 0;
  while (str[size] != '\0') {
    size++;

  }

  printf("\n222:  %d", size);

  i = 0;
  temp = 0;
  while (i < size) {
    j = 0;
    factor = 1;
    while (j < (size - i -1)) {
      factor *= 10;
      j++;
    }
    temp += (str[i]-48)*factor;
    i++;
  }
  return (temp);
}


int main()
{
  int num;
  char str[] = "1234567";

  num = ft_atoi(str);
  printf("\n333:  %d", num);
  return (0);
}


