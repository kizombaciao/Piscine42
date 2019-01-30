/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:13:08 by jchao             #+#    #+#             */
/*   Updated: 2019/01/17 20:31:33 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		my_find_size(int argc, char **argv)
{
	int i;
	int size;

	size = 0;
	i = 1;
	while (i < argc)
	{
		size += ft_strlen(*(argv + i));
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*p;
	int		i;
	int		j;
	int		size;

	size = my_find_size(argc, argv);
	p = (char *)malloc(sizeof(*p) * (size + (argc - 1)));
	size = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < ft_strlen(*(argv + i)))
		{
			*(p + size) = *(*(argv + i) + j);
			j++;
			size++;
		}
		*(p + size) = '\0';
		if (i < argc - 1)
			*(p + size) = '\n';
		size++;
		i++;
	}
	return (p);
}
