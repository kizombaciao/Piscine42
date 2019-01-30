/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:25:15 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 17:51:29 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
}