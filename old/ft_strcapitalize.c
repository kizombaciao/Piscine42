/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:26:34 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 19:35:59 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int i;
	int capitalize;
	int index;

	index = 'a' - 'A';
	i = 0;
	capitalize = 1;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z') && capitalize)
		{
			str[i] = (str[i] - index);
		} else if (str[i] >= 'A' && str[i] <= 'Z' && !capitalize)
		{
			str[i] = (str[i] + index);
		}
		if (((str[i] >= '0') && (str[i] <= '9')) || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			capitalize = 0;
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
