/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 01:04:23 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/23 02:36:25 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_atoi(char	*nb)
{
	int	count;
	int	res;

	res = 0;
	count = 0;
	while (nb[count] != '\0')
	{
		res *= 10;
		res += nb[count] - '0';
		count++;
	}
	return (res);
}
void	ft_do_op(int	nb1, char	*op, int	nb2)
{
	int	res;

	res = 0;
	if (*op  == '/')
	{
		res = nb1 / nb2;
		printf("%i", res);
	}
	if (*op == '*')
	{
		res = nb1 * nb2;
		printf("%i", res);
	}
	if (*op == '+')
	{
		res = nb1 + nb2;
		printf("%i", res);
	}
	if (*op == '-')
	{
		res = nb1 - nb2;
		printf("%i", res);
	}
	if (*op == '%')
	{
		res = nb1 % nb2;
		printf("%i", res);
	}
	else
	{
		printf("\n");
	}
}

int	main(int	ac, char	**av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_do_op(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
}
