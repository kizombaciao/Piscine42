/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:37:48 by jchao             #+#    #+#             */
/*   Updated: 2019/01/12 21:24:26 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		nextprime;
	int		i;
	int		is_prime;

	nextprime = nb + 1;
	if (nextprime % 2 == 0 && nextprime != 2)
		nextprime += 1;
	is_prime = 0;
	while (is_prime != 1)
	{
		i = 2;
		is_prime = 1;
		while (i <= nextprime / 2)
		{
			if (nextprime % i == 0)
				is_prime = 0;
			i++;
		}
		if (is_prime == 1)
			return (nextprime);
		else
			nextprime += 2;
	}
	return (0);
}
