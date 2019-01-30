/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 14:08:10 by jchao             #+#    #+#             */
/*   Updated: 2019/01/13 14:47:58 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_t_left = 'A';
char	g_t_right = 'C';
char	g_b_left = 'A';
char	g_b_right = 'C';
char	g_h_side = 'B';
char	g_v_side = 'B';
char	g_space = ' ';

int		ft_putchar(char c);

void	rush00_top(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(g_t_left);
		}
		else if (i == (width - 1))
		{
			ft_putchar(g_t_right);
		}
		else
		{
			ft_putchar(g_h_side);
		}
		i++;
	}
	ft_putchar(10);
}

void	rush00_bottom(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(g_b_left);
		}
		else if (i == (width - 1))
		{
			ft_putchar(g_b_right);
		}
		else
		{
			ft_putchar(g_h_side);
		}
		i++;
	}
}

void	rush00_mid(int width)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == (width - 1))
		{
			ft_putchar(g_v_side);
		}
		else
		{
			ft_putchar(g_space);
		}
		i++;
	}
}

void	rush00(int width, int height)
{
	int i;
	int j;

	rush00_top(width);
	j = 0;
	while (j < height - 2)
	{
		rush00_mid(width);
		ft_putchar(10);
		j++;
	}
	if (height > 1)
	{
		rush00_bottom(width);
		ft_putchar(10);
	}
}
