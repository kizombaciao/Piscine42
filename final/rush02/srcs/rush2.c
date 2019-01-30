/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeltsev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 18:58:11 by aeltsev           #+#    #+#             */
/*   Updated: 2019/01/27 18:58:30 by aeltsev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fth.h"

void	resolve_rush(t_box *shape)
{
	if (shape->frfc == 'o')
		shape->rush = 0;
	else if (shape->frfc == '/')
		shape->rush = 1;
	else if (shape->frfc == 'A')
	{
		if (shape->frlc == 'A')
			shape->rush = 2;
		else if (shape->lrfc == 'A')
			shape->rush = 3;
		else if (shape->frlc == 'C' && shape->lrfc == 'C')
			shape->rush = 4;
		else if (shape->lrfc == 'C' && shape->cols == 1)
			shape->rush = 6;
		else if (shape->frlc == 'C' && shape->rows == 1)
			shape->rush = 7;
		else if (shape->rows == 1 && shape->cols == 1)
			shape->rush = 9;
	}
	else
		shape->rush = -1;
}

void	analyze_input(t_box *shape)
{
	char	c;
	char	prev;
	int		ret;
	int		i;

	i = 0;
	while ((ret = read(0, &c, 1)))
	{
		if (shape->frfc == '\0')
			shape->frfc = c;
		if (c == '\n')
		{
			if (shape->frlc == '\0' && i > 1)
				shape->frlc = prev;
			shape->rows++;
			shape->cols = i;
			i = -1;
		}
		if (prev == '\n')
			shape->lrfc = c;
		prev = c;
		i++;
	}
}

void	print_colrow(t_box *shape)
{
	ft_putnbr(shape->rows);
	ft_putstr("] [");
	ft_putnbr(shape->cols);
}

void	print_result(t_box *shape)
{
	if (shape->rush == 0)
		ft_putstr("[rush-00] [");
	else if (shape->rush == 1)
		ft_putstr("[rush-01] [");
	else if (shape->rush == 2 || shape->rush == 6 || shape->rush == 9)
		ft_putstr("[rush-02] [");
	else if (shape->rush == 3 || shape->rush == 7)
		ft_putstr("[rush-03] [");
	else if (shape->rush == 4)
		ft_putstr("[rush-04] [");
	print_colrow(shape);
	if (shape->rush <= 4)
		ft_putstr("]\n");
	else
	{
		if (shape->rush == 9)
		{
			ft_putstr("] || [rush-03] [");
			print_colrow(shape);
		}
		ft_putstr("] || [rush-04] [");
		print_colrow(shape);
		ft_putstr("]\n");
	}
}

int		main(void)
{
	t_box	*shape;

	shape = malloc(sizeof(t_box));
	shape->rows = 0;
	shape->cols = 0;
	shape->frfc = '\0';
	shape->frlc = '\0';
	shape->lrfc = '\0';
	analyze_input(shape);
	resolve_rush(shape);
	if (shape->rush == -1)
		ft_putstr("Give me real Rush\n");
	else
		print_result(shape);
	free(shape);
}
