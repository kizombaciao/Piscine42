/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:00:37 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 20:04:30 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *p;

	p = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		p[i] = (*f)(tab[i]);
		i++;
	}
	return (p);
}
