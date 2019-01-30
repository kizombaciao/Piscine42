/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 11:33:04 by jchao             #+#    #+#             */
/*   Updated: 2019/01/11 11:33:18 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
  char temp;
  int i;
  int j;

  length = 0;
  while (str[length]) {
    length++;
  }
  
  j = 0;
  i = length-1;
  while (j < i) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    j++;
    i--;
  }
  return(str);
}
