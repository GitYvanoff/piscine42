/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:12:41 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 02:31:34 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_pow(int	x, int	y)
{
	int	cmpt;
	int	res;

    cmpt = 0;
    res = 1;
	while	(cmpt < y)
	{
		res = res * x;
		cmpt++;
	}
	return res;
}

int	ft_atoi(char	*str)
{
	int	count;
	int	offset;
	int	i;
	int	minus_count;
	int	res;
	
	offset = 0;
	res = 0;
	minus_count = 0;
	count = 0;
	i = 0;
	while (str[count] == ' ')
	{
		count++;
		printf("espace\n");
	}
	while (str[count] == '-' || str[count] == '+')
	{
		if(str[count] == '-')
		{
			minus_count++;
			printf("moin\n");
		}
		else
			printf("plus\n");
		count++;
	}
	while (str[count + offset] - '0' >= 0 && str[count + offset] - '0' <= 9)
	{
		offset++;
		printf("off\n");
	}
		while (i < offset)
		{
			res += ((str[count + i] - '0') * ft_pow(10, (offset - 1 - i)));
			i++;
			printf("i++\n");
			printf("%i\n", res);
		}
		if (minus_count % 2 == 1)
			res = res * -1;
	return (res);
}

int	main(void)
{
	char	test[] = "   ---+---+---aviasmicaa12314385ab567";

	printf("%i", ft_atoi(test));
}
