/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 02:34:48 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/19 22:33:34 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int	nb,	int	power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
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
	res = ft_recursive_power(value_1, value_2);
	printf("%i", res);
}*/
