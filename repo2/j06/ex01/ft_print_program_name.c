/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:57:24 by jchao             #+#    #+#             */
/*   Updated: 2019/01/16 19:07:28 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (*(*argv + i))
	{
		ft_putchar(*(*argv + i));
		i++;
	}
	ft_putchar('\n');
	return (0);
}
