/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:19:48 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 19:20:48 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) > 96 && *(str + i) < 123)
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
