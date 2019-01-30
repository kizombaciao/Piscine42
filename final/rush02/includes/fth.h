/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fth.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeltsev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 17:10:03 by aeltsev           #+#    #+#             */
/*   Updated: 2019/01/27 18:35:29 by aeltsev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTH_H
# define FTH_H

# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);

typedef struct	s_box
{
	int		rush;
	int		cols;
	int		rows;
	char	frfc;
	char	frlc;
	char	lrfc;
}				t_box;

#endif
