/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:04 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 12:57:08 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i]) {
    
    ft_putchar(str[i]);
    i++;

  }
}


/* what is standard output */

int main()
{
  char str[] = "test";

  ft_putstr(str);

  return (0);
}
