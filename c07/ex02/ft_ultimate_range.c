/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_rage2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 01:14:00 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/20 18:12:10 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	count;
	int	tmp;
	int	i;

	tmp = min;
	count = 0;
	if (min >= max)
		return (0);
	while (min < max)
	{
		count++;
		min++;
	}
	*range = malloc(sizeof(int) * count);
	if (*range == NULL)
		return (0);
	i = 0;
	while ((tmp + i) < max)
	{
		(*range)[i] = tmp + i;
		i++;
	}
	return (i);
}

/*int	main(int	ac, char	**av)
{
	int	*ptr;
	int	c;
	int res;
	
	if (ac != 3)
		return (1);
	c = 0;
	// res = ft_ultimate_range(&ptr, atoi(av[1]), atoi(av[2]));
	res = ft_ultimate_range(&ptr, 5, 10);
	printf("coucou poulet pouet\n");
	printf("taille : %i\n", res);
	while (c < res)
	{
		printf("%i ", ptr[c]);
		c++;
	}
	return (0);	
}*/
