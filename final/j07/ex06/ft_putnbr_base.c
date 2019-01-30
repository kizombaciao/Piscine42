/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:11:25 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 23:19:26 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		base_valid(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		my_negative_nbr(int nbr)
{
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int index;
	int num[100];

	if (base_valid(base))
	{
		nbr = my_negative_nbr(nbr);
		index = 0;
		while (base[index++]) // count the length of the base index, eg 16
		{
		}
		index--;
		i = 0;
		while (nbr)
		{
			num[i] = nbr % index; // mod and divide by 16 if hexadecimal
			nbr /= index;
			i++;
		}
		while (i--)
		{
			ft_putchar(base[num[i]]);
		}
	}
}
