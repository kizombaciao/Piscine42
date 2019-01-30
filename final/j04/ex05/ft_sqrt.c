/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:36:58 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 19:31:40 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;
	int		result;

	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	i = 1;
	result = 1;
	while (result <= nb)
	{
		i++;
		result = i * i;
	}
	if ((i - 1) * (i - 1) == nb)
	{
		return (i - 1);
	}
	else
	{
		return (0);
	}
}
