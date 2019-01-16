/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:35:34 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 18:44:42 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size_str;
	int size_to_find;
	int flag;

	i = 0;
	while (str[i])
	{
		i++;
	}
	size_str = i;
	j = 0;
	while (to_find[j])
	{
		j++;
	}
	size_to_find = j;
	i = 0;
	while (i <= size_str - size_to_find)
	{
		j = 0;
		flag = 1;
		while (j < size_to_find)
		{
			if (to_find[j] != str[i + j])
				flag = 0;
			j++;
		}
		if (flag == 1)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
