/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:00:28 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 22:37:55 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

int	is_square_free(t_map map, int	row, int	column, int	square_size)
{
	int	x;
	int	y;

	y = -1;
	while (++y < square_size)
	{
		x = -1;
		while (++x < square_size)
		{
			if (map.grid[row + y][column + x] == map.obstacle)
				return (0);
		}
	}
	return (1);
}

int	solve(t_map map,	int *max_x, int	*max_y, int	*max_found)
{
	int	column;
	int	row;
	int	sqw_s;

	*max_found = -1;
	row = -1;
	while (++row < map.height)
	{
		column = -1;
		while (++column < map.width)
		{
			sqw_s = 0;
			while (++sqw_s + row < map.height && sqw_s + column < map.width)
			{
				if (is_square_free(map, row, column, sqw_s)
					&& sqw_s > *max_found)
				{
					*max_found = sqw_s;
					*max_x = column;
					*max_y = row;
				}
			}
		}
	}
	return (*max_found > 0);
}
