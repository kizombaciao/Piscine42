/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:35:26 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 22:36:25 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if ((*begin_list) == NULL)
	{
		(*begin_list) = ft_create_elem(data);
		return ;
	}
	else
	{
		while ((*begin_list)->next != NULL)
		{
			(*begin_list) = (*begin_list)->next;
		}
		tmp = ft_create_elem(data);
		(*begin_list)->next = tmp;
	}
}
