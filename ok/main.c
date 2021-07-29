/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:52:25 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 23:21:43 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"
#include "solve.h"

void	draw_map(t_map map, int x, int y, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < map.height)
	{
		j = 0;
		while (map.grid[i][j])
		{
			if (j >= x && j < x + size && i >= y && i < y + size)
				write(1, &map.filler, 1);
			else
				write(1, &map.grid[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	get_fd_or_exit(char	*path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Map Error!\n", 11);
		exit(0);
	}
	return (fd);
}

void	solve_and_print(int	fd)
{
	t_map	map;
	int		coord_x;
	int		coord_y;
	int		square_size;

	if (!ft_map_reader(fd, &map))
		return ;
	if (solve(map, &coord_x, &coord_y, &square_size))
		draw_map(map, coord_x, coord_y, square_size);
	coord_y = -1;
	while (++coord_y < map.height)
		free(map.grid[coord_y]);
	free(map.grid);
}

int	main(int	ac, char	**av)
{
	int	to_solve;
	int	fd;

	if (ac <= 1)
	{
		solve_and_print(0);
		exit (0);
	}
	to_solve = 0;
	while (++to_solve < ac)
	{
		fd = get_fd_or_exit(av[to_solve]);
		solve_and_print(fd);
		write(1, "\n", 1);
		close(fd);
	}
	return (0);
}
