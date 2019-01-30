/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:33:36 by jchao             #+#    #+#             */
/*   Updated: 2019/01/17 21:58:15 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	if (str != NULL)
	{
		i = 0;
		while (i < ft_strlen(src))
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
