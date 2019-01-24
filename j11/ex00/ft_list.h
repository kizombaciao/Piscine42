/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:00:45 by jchao             #+#    #+#             */
/*   Updated: 2019/01/23 22:19:47 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef				FT_LIST_H
# define			FT_LIST_H

#include <stdlib.h>

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(void *data);
#endif
