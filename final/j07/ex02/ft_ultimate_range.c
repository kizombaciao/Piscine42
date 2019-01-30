/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:56:06 by jchao             #+#    #+#             */
/*   Updated: 2019/01/17 20:00:43 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		p = (int *)malloc((max - min) * sizeof(int));
		j = 0;
		while (j < (max - min))
		{
			*(p + j) = min + j;
			j++;
		}
		*range = p;
		return (max - min);
	}
}
