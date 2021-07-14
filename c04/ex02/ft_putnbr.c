/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:16:22 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 17:32:41 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int	nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int	nb)
{
	unsigned int	nb_unsigned;

	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		nb_unsigned = (unsigned int)nb;
	if (nb_unsigned >= 10)
	{
		ft_putnbr(nb_unsigned / 10);
		ft_putnbr(nb_unsigned % 10);
	}
	else
		ft_putchar(nb_unsigned + '0');
}

/*int	main(void)
{
	int	test;

	test = -2147483648;
	ft_putnbr(test);
}*/
