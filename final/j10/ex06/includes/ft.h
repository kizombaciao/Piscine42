/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 22:06:57 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 22:35:30 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct		operator
{
	char			op;
	void			(*opfunc)(int, int);
}					operand;

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_str_is_numeric(char *str);
void	initialize(operand *oper);
void	add(int x, int y);
void	subtract(int x, int y);
void	multiply(int x, int y);
void	divide(int x, int y);
void	modulus(int x, int y);

#endif
