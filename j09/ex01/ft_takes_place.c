/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:19:26 by jchao             #+#    #+#             */
/*   Updated: 2019/01/18 15:23:40 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
    if (hour <= 11 || hour == 24)
	{
        if (hour == 24)
		{
            printf("%d A.M. AND ", hour - 12);
        } else
		{
            printf("%d A.M. AND ", hour);
        }
    }
	else
	{
        if (hour == 12)
		{
            printf("%d P.M. AND ", hour);
        }
		else
		{
            printf("%d P.M. AND ", hour - 12);
        }
    }
    hour = hour % 24;
    if (hour + 1 <= 11 || hour + 1 == 24)
	{
        if (hour + 1 == 24)
		{
            printf("%d A.M.\n", hour + 1 - 12);
        }
		else
		{
            printf("%d A.M.\n", hour + 1);
        }
    }
	else
	{
        if (hour + 1 == 12)
		{
            printf("%d P.M.\n", hour + 1);
        }
		else
		{
        printf("%d P.M.\n", hour + 1 - 12);
        }
    }
}
