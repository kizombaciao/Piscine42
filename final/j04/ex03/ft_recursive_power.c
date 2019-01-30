/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:36:10 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 18:26:17 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else
	{
		if (power <= 1)
		{
			return (nb);
		}
		else
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	}
}
