/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:46:17 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 22:48:49 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	if (begin_list == NULL)
	{
		return (0);
	}
	count = 1;
	while (begin_list->next != NULL)
	{
		printf("\nCounting:  %d", count);
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
