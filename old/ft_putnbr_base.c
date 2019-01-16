/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:51:24 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 22:04:56 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		base_valid(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		if (base[i] < 32 || base[i] > 126)
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int index;
	int num[100];

	if (base_valid(base))
	{
		if (nbr < 0)
			nbr *= -1;
			ft_putchar('-');
		index = 0;
		while (base[index++])
		{
		}
		index--;
		i = 0;
		while (nbr)
		{
			num[i] = nbr % index;
			nbr /= index;
			i++;
		}
		while (i--)
		{
			ft_putchar(base[num[i]]);
		}
	}
}
