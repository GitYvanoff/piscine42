#include "ft_base.h"
#include "string.h"
/*
char	*get_first_line(char *map)
{
	return (ft_strdup_stop(map, '\n'));
}

int	get_lines_count(char *first_line)
{
	if (first_line[0] > '9' || first_line[0] < '0')
		return (-1);
	return (ft_atoi(first_line));
}
*/
void	map_loader(char *str, int lines_count, t_map *map)
{
	int	y;

	map->grid = (char **) malloc(
			sizeof(char *) * lines_count);
	y = 0;
	while (y < lines_count)
	{
		str = go_to_char(str, '\n');
		str++;
		map->grid[y] = ft_strdup_stop(str, '\n');
		y++;
	}
	map->height = lines_count;
	map->width = ft_strlen(map->grid[0]);
}

int	validate_char(t_map *map, int x, int y)
{
	return (
		map->grid[y][x] == map->empty
		|| map->grid[y][x] == map->obstacle
		|| map->grid[y][x] == map->filler
	);
}

int	is_map_valid(t_map *map, int lines_count)
{
	int	expected_width;
	int	y;
	int	x;
	int	line_length;

	y = 0;
	expected_width = ft_strlen(map->grid[y]);
	while (y < lines_count)
	{
		line_length = ft_strlen(map->grid[y]);
		if (line_length != expected_width)
			return (1);
		x = -1;
		while (++x < line_length)
			if (!validate_char(map, x, y))
				return (0);
		y++;
	}
	return (1);
}

void	get_allowed_chars(char *first_line, t_map *map)
{
	int	count;

	count = 0;
	while (
		first_line[count] >= '0'
		&& first_line[count] <= '9')
		count++;
	map->empty = first_line[count];
	map->obstacle = first_line[count + 1];
	map->filler = first_line[count + 2];
}

int	ft_map_reader(int fd, t_map *map)
{
	char	*raw_map;
	char	*first_line;
	int		lines_count;

	raw_map = load_map_from_fd(fd);
	first_line = get_first_line(raw_map);
	lines_count = get_lines_count(first_line);
	get_allowed_chars(first_line, map);
	map_loader(raw_map, lines_count, map);
	return (is_map_valid(map, lines_count));
}
