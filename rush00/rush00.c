/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:47:57 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/10 13:15:46 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);
void	axex(int	axex);
void	axey(int	x, int	axey);

void	rush(int	x, int	y)
{
	if (x < 0)
	{
		x = x * -1;
	}
	if (y < 0)
	{
		y = y * -1;
	}
	axex(x);
	axey(x, y);
}

void	axex(int	axex)
{
	while (axex > 0)
	{
		ft_putchar('o');
		axex--;
		while (axex > 1)
		{
			ft_putchar('-');
			axex--;
		}
	}
}

void	axey(int	x, int	axey)
{
	int	spacecnt;

	while (axey > 1)
	{
		spacecnt = x - 2;
		ft_putchar('\n');
		ft_putchar('|');
		axey--;
		while (spacecnt > 0)
		{
			ft_putchar(' ');
			spacecnt--;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
	}
	ft_putchar('\n');
	axex(x);
}
