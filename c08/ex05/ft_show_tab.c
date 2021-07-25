/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:31:32 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/25 22:28:23 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

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

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	write(1, str, count);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
