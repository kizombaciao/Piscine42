/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:33:33 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 20:35:11 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) >= 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
