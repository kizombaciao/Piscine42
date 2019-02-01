/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 17:44:52 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 17:58:57 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int num[50];

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	i = 0;
	while (nb != 0) // till nb == 0
	{
		num[i] = nb % 10; // find remainder
		nb = nb / 10; // divide by 10
		i++;
	}
	while (i > 0)
	{
		ft_putchar(num[i - 1] + 48);
		i--;
	}
}
