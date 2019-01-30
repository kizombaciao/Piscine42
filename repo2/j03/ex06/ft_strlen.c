/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:17:27 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 13:17:31 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int length = 0;

  while (*str != '\0') {
    length++;
    str++;
  }
  return (length);
}

int main()
{
  int len;

  char str[] = "testthisstring";
  len = ft_strlen(str);

  printf("Length:  %d", len);
  return (0);
}
