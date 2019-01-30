/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:44:58 by jchao             #+#    #+#             */
/*   Updated: 2019/01/17 19:46:34 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *p;

	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		p = (int *)malloc(sizeof(*p) * (max - min));
		i = 0;
		while (i < (max - min))
		{
			*(p + i) = min + i;
			i++;
		}
		return (p);
	}
}
