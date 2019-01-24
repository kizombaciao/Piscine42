/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:57:38 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 22:00:01 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *t_list_ptr;

	t_list_ptr = (t_list *)malloc(sizeof(t_list));
	if (t_list_ptr)
	{
		t_list_ptr->data = data;
		t_list_ptr->next = NULL;
	}
	return (t_list_ptr);
}
