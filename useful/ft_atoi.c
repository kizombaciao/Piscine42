/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:05:11 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 18:12:53 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int base;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	base = 0;
	while (str[i])
	{
		if (ft_str_is_numeric(&str[i]) == 0)
		{
			return (0);
		}
		base = base * 10 + (str[i++] - '0');
	}
	return (sign * base);
}
