/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:53:59 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 19:12:03 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	atoi(char	*str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

void	put_char(char	c)
{
	write(1, &c, 1);
}

void	put_nbr(int	nb)
{
	if (nb > 9)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	else
		put_char(nb + '0');
}

int	main(int	ac, char	**av)
{
	int i;
	if (ac == 1)
		return (0);
	i = 1;
	while (i != ac)
	{
		put_nbr(atoi(av[i]));
		i++;
	}
}
