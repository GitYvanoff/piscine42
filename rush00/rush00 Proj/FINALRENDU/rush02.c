/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   rush02.c                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnicolie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*   By: ypetruzz <marvin@42lausanne.ch>          +#+#+#+#+#+   +#+           */
/*   By: jjaqueme <marvin@42lausanne.ch>               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*   Created: 2021/07/10 15:12:55 by team                                     */
/*   Updated: 2021/07/11 15:15:00 by team                                     */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	line(char left_char, char inner_char, char right_char, int width)
{
	if (width == 1)
	{
		ft_putchar(left_char);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(left_char);
		while (width > 2)
		{
			ft_putchar(inner_char);
			width--;
		}
		ft_putchar(right_char);
		ft_putchar('\n');
	}
	return (0);
}

int	rush(int x, int y)
{
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	if (y == 1)
		line('A', 'B', 'A', x);
	else if (x > 0 && y > 0)
	{
		line('A', 'B', 'A', x);
		while (y > 2)
		{
			line('B', ' ', 'B', x);
			y--;
		}
		line('C', 'B', 'C', x);
	}
	return (0);
}
