/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:11:51 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/17 03:03:16 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_power(int	nb, int	power)
{
	int	count;
	int	res;

	count = 0;
	res = 1;
	while (count < power)
	{
		res = res * nb;
		count++;
	}
	return (res);
}

/*int	main(int	argc, char	**argv)
{
	int	value_1;
	int	value_2;
	int	res;

	res = 0;
	value_1 = 0;
	value_2 = 0;
	if (argc > 3)
		return (1);
	value_1 = atoi(argv[1]);
	value_2 = atoi(argv[2]);
	res = ft_iterative_power(value_1, value_2);
	printf("%i", res);
}*/
