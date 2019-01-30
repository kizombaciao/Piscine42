/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:41:19 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 22:47:00 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		i;
	int		flag;

	if (argc <= 1)
		return (0);
	operand oper[5];

	if (argc <= 4)
	{
		initialize(oper);
		i = 0;
		flag = 0;
		while (i < 5)
		{
			if (argv[2][0] == oper[i].op)
			{
				flag = 1;
				oper[i].opfunc(ft_atoi(argv[1]), ft_atoi(argv[3]));
			}
			i++;
		}
		if (flag == 0)
			ft_putchar('0');
		ft_putchar('\n');
	}
}
