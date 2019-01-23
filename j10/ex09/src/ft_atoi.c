/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:05:11 by jchao             #+#    #+#             */
/*   Updated: 2019/01/15 18:12:53 by jchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int    start;
    int    i;
    int    res;
    int    negative;
    
    start = 0;
    while (str[start] != '\0' && (str[start] == ' ' || str[start] == '\t' ||
                                  str[start] == '\r' || str[start] == '\n'))
        start++;
    i = start;
    res = 0;
    negative = 0;
    while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
                              (i == start && (str[i] == '-' || str[i] == '+'))))
    {
        if (str[i] == '-')
            negative = 1;
        if (str[i] >= '0' && str[i] <= '9')
            res = (res * 10) + (str[i] - '0');
        ++i;
    }
    if (negative)
        res *= -1;
    return (res);
}
