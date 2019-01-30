/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:44:52 by jchao             #+#    #+#             */
/*   Updated: 2019/01/24 19:18:55 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 5

int		my_argc_error_check(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int		my_print_open_failed(void)
{
	write(2, "open() failed.\n", 15);
	return (1);
}

int		my_print_close_failed(void)
{
	write(2, "close() failed.\n", 15);
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		read_n;
	char	buf[BUF_SIZE + 1];

	if (my_argc_error_check(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (my_print_open_failed());
	read_n = 1;
	while (read_n)
	{
		read_n = read(fd, buf, BUF_SIZE);
		buf[read_n] = '\0';
		write(1, buf, read_n);
	}
	if (close(fd) == -1)
		return (my_print_close_failed());
	return (0);
}
