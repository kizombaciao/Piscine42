/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:35:24 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 23:35:30 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_list_h
#define ft_list_h

#include <stdlib.h>

typedef struct      s_list
{
    void            *data;
    struct s_list   *next;
}                   t_list;

t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
void ft_list_clear(t_list **begin_list);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
