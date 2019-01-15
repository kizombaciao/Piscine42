/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzhang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 14:18:03 by bzhang            #+#    #+#             */
/*   Updated: 2019/01/12 14:57:31 by bzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char g_t_left;
char g_t_right;
char g_b_left;
char g_b_right;
char g_h_side;
char g_v_side;
char g_space;
//needs to be set per exercise
g_t_left =;
g_t_right =;
g_b_left =;
g_b_right =;
g_h_side =;
g_v_side =;
g_space = ' ';

int		ft_putchar(char c);

void	ft_print_row(int width, char left, char middle, char right)
{
	int iterator;

	iterator = 2;
	putchar(left);
	if (iterator < width)
	{
		while (iterator < width)
		{
			putchar(middle);
			iterator++;
		}
		putchar(right);
	}
}

void	rush(int width, int height);
{
	int counter;

	counter = 0;
	while (++counter < height)
	{
		if (counter == 1)
		{
			ft_print_row(width, g_t_left, g_h_side, g_t_right);
		}
		else if (counter < height && counter > 1)
		{
			ft_print_row(width, g_v_side, g_space, g_v_side);
		}
		else if (counter == height)
		{
			ft_print_row(width, g_b_left, g_h_side, g_b_right);
		}
	}
}

/*	i suspect that they won't test 0 or negative values, but it should be trivial to handle.
 *	7 char variables, one for each corner of the box, two for the sides, and one for the middle
 *	a height counter and conditions: counter >= 1 && counter <= height
 *		three different conditions: when counter == 1, when counter == height, 1 < counter < height
 *		int iterator;
 *
 *		iterator = 2;
 *
 *		if (counter == 1)
 *		{
 *			putchar(topleft);
 *			if (iterator < width)
 *			{
 *				while (iterator < width)
 *				{
 *					putchar(horizontalsides);
 *					iterator++;
 *				}
 *				putchar(topright);
 *			}
 *		}
 *		else if (counter < height && counter > 1)
 *		{
 *			putchar(verticalside);
 *			if (iterator < width)
 *			{
 *				while (iterator < width)
 *				{
 *					putchar(middle);
 *					iterator++;
 *				}
 *				putchar(verticalside);
 *			}
 *		}
 *		else if (counter == height)
 *		{
 *			putchar(bottomleft);
 *			if (iterator < width)
 *			{
 *				while (iterator < width)
 *				{
 *					putchar(horizontalside);
 *					iterator++;
 *				}
 *				putchar(bottomright);
 *			}
 *		}
 *		
 *	since the three conditions have the same process structure except for the putchar character, we can abstract that to a seperate function that takes 4 variables: the three chars and the width. this structure should account for all of the exercises in the rush assignment.
 *	
 *	if you want to modify the code to use fewer chars for the earlier exercises feel free to go ahead
 *
 *
 *
 */




int		main(void)
{
	rush(a, b );
	return (0);
}
