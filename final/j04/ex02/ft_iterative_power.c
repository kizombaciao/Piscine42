/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:35:42 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 18:16:17 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		num;

	if (power < 0)
	{
		return (0);
	}
	else
	{
		num = 1;
		i = 0;
		while (i < power)
		{
			num *= nb;
			i++;
		}
		return (num);
	}
}
