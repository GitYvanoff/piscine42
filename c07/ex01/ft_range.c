/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:48:53 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 02:40:05 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*int	main(int	ac, char	**av)
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
}*/
