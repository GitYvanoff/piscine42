/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:25:27 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 21:07:54 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char	*str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	else
		return (0);
	return (res);
}

int	str_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	convert_base(int	nb, char	*base)
{
	int	base_size;

	base_size = str_len(base);
	if (nb >= base_size)
	{
		convert_base(nb / base_size, base);
		convert_base(nb % base_size, base);
	}
	else
		write(1, &base[nb], 1);
}

int	main(int	ac, char	**av)
{
	if(ac == 0)
		return(1);
	convert_base(ft_atoi(av[1]), av[2]);
}
