/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 22:34:43 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 22:46:01 by jchao            ###   ########.fr       */
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
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			str[i] -= index * capitalize;
			capitalize = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			capitalize = 0;
		}
		else
		{
			capitalize = 1;
		}
		i++;
	}
	return (str);
}
