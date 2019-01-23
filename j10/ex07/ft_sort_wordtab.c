/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:43:47 by jchao             #+#    #+#             */
/*   Updated: 2019/01/22 20:48:25 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_tab_compare(char *p1, char *p2)
{
	while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
	{
		if (*p1 == '\0' || *p2 == '\0')
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

void	my_swap_by_ptr(char **p1, char **p2)
{
	char *temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int h;

	h = 1;
	while (tab[h])
	{
		i = 1;
		while (tab[i])
		{
			if (my_tab_compare(tab[i - 1], tab[i]) > 0)
			{
				my_swap_by_ptr(&tab[i - 1], &tab[i]);
			}
			i++;
		}
		h++;
	}
}
