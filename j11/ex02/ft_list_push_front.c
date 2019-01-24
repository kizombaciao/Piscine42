/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:40:26 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 22:42:48 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if ((*begin_list) == NULL)
	{
		(*begin_list) = ft_create_elem(data);
		return ;
	}
	else
	{
		tmp = (*begin_list);
		(*begin_list) = ft_create_elem(data);
		(*begin_list)->next = tmp;
	}
}
