/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeltsev <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 22:54:13 by aeltsev           #+#    #+#             */
/*   Updated: 2019/01/27 18:34:29 by aeltsev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		ft_putchar(str[n++]);
}
