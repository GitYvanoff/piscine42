/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:09:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 18:17:51 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pow(int	x, int	y)
{
	int	cmpt;
	int	res;

	cmpt = 0;
	res = 1;
	while (cmpt < y)
	{
		res = res * x;
		cmpt++;
	}
	return (res);
}

void	base_convert(int	src, int	base_found)
{
	int	res;

	if (src != 0)
	{
		res = src % base_found;
		base_convert(src / base_found);
		ft_putchar(res + '0');
	}
	
}

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

int	same_char(char	*base)
{
	char	base_cont[ft_strlen(base)];
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (base[c] != '\0')
	{
		base_cont[c] = base[c];
		i = c + 1;
		while (base[i] != '\0')
		{
			if (base_cont[c] == base[i])
				return (0);
			else
				i++;
		}
		c++;
	}
	return (1);
}

/*void	ft_putnbr_base(int	nbr, char	*base)
{

}*/


int	main(void)
{
	int	test;
	char	base_test[8] = "abcdef";
	printf("%i", same_char(base_test));
	test = 1128;
}
