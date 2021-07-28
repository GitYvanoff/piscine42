/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:44:35 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 18:53:38 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	put_char(char	c)
{
	write(1, &c, 1);
}

void	putnbr(int	nb)
{
	if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
	{
		put_char(nb + '0');
	}
}

int	main(int	ac, char	**av)
{
	(void)av;
	ac--;
	putnbr(ac);
	put_char('\n');
	return (0);	
}
