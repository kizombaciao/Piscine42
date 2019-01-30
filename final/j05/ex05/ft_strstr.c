/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:58:53 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 19:06:48 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_size_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		my_size_to_find(char *to_find)
{
	int j;

	j = 0;
	while (to_find[j])
	{
		j++;
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int size_str;
	int size_to_find;
	int flag;

	size_str = my_size_str(str);
	size_to_find = my_size_to_find(to_find);
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
