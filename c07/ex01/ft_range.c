/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:48:53 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/19 19:07:45 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int	min, int	max)
{
	int	count;
	int	*str;
	int	tmp;

	tmp = min;
	count = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		count++;
		min++;
	}
	str = malloc(sizeof (int) * count);
	count = 0;
	while (tmp < max)
	{
		str[count] = tmp;
		count++;
		tmp++;
	}
	return (str);
}

int	main(int	ac, char	**av)
{
	int	*tab;
	int	count;

	count = 0;
	if (ac != 3)
		return (1);
	tab = ft_range(atoi(av[1]), atoi(av[2]));
	while (count != (atoi(av[1]) - atoi(av[2]))* -1)
	{
		printf("%i ", tab[count]);
		count++;
	}
	return (0);
}
