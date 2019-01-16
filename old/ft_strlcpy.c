/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:13:53 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 21:35:49 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (dest[i++])
	}
	}
	k = 0;
	while (src[k++])
	{
	}
	j = 0;
	while (src[j] && j < size)
	{
		dest[i-1 + j] = src[j];
		j++;
	}
	if (size > i + 1-1)
		dest[i-1 + j] = '\0';
	if (size < i-1)
		return (size + k-1);
	else
		return (i-1 + k-1);
}
