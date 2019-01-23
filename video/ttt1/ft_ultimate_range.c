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
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int *p;

	if (min > max)
	{
		return (0);
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

int main()
{
    int num, min=-5, max=5, j;
    int **ptr;
    
    num = ft_ultimate_range(ptr, min, max);
    for (j = 0; j< (max-min); j++)
    {
        printf("\n111:  %d", *(*ptr + j));
        
    }
}
