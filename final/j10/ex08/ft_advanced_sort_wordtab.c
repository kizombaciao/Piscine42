/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:53:33 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 20:57:49 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_swap_by_ptr(char **p1, char **p2)
{
	char *temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char *))
{
	int i;

	i = 1;
	while (tab[i])
	{
		if ((*cmp)(tab[i - 1], tab[i]) > 0)
		{
			my_swap_by_ptr(&tab[i - 1], &tab[i]);
		}
		i++;
	}
}
