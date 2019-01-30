/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:29:22 by jchao             #+#    #+#             */
/*   Updated: 2019/01/16 19:47:12 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	my_write(int argc, char **argv);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	temp[100];

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(*(argv + i), *(argv + j)) > 0)
			{
				ft_strcpy(temp, *(argv + i));
				ft_strcpy(*(argv + i), *(argv + j));
				ft_strcpy(*(argv + j), temp);
			}
			j++;
		}
		i++;
	}
	my_write(argc, argv);
	return (0);
}

void	my_write(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			ft_putchar(*(*(argv + i) + j));
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	char c1;
	char c2;

	c1 = *s1++;
	c2 = *s2++;
	if (c1 == '\0')
	{
		return (c1 - c2);
	}
	while (c1 == c2)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
		{
			return (c1 - c2);
		}
	}
	return (c1 - c2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
