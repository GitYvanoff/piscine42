/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_reader.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:04:41 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/27 17:31:02 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"
#include "string.h"

char	*get_first_line(char	*map)
{
	char	*first_line;

	first_line = ft_strdup_stop(map, '\n');
	return(first_line);
}

char    *go_to_char(char *str, char c)
{
    while (*str && *str != c)
        str++;
    return (str);
}

char    **map_loader(char *str, int lines_count)
{
    char    **map;
    int     y;

    map = (char **)malloc(sizeof(char *) * lines_count);
    str = go_to_char(str, '\n');
    str++;
    y = 0;
    while (y < lines_count)
    {
        map[y] = ft_strdup_stop(str, '\n');
        y++;
        str = go_to_char(str, '\n');
        str++;
    }
    return (map);
}

int    validate_char(char c, char *allowed)
{
    return (c == allowed[0] || c == allowed[1]);
}

int    is_map_valid(char **map, int lines_count)
{
    int expected_width;
    int y;
    int x;
    int line_length;

    y = 0;
    expected_width = ft_strlen(map[y]);
    while (y < lines_count)
    {
        line_length = ft_strlen(map[y]);
        x = 0;
        if (line_length != expected_width)
            return (1);
        while (x < line_length)
            if (!validate_char(map[y][x++], ".o")) //TODO: send allowed chars
                return (1);
        y++;
    }
    return (0);
}

int     ft_map_reader(int ac, char **av)
{
	char *map_tmp; //code smell
	char *first_line;
    char **map;


	if (ac >= 1)
	{
		map_tmp = ft_read_console(); //eurk
		printf("je suis la map\n %s", map_tmp);
		first_line = get_first_line(map_tmp);
		printf("\n Je suis la premiere ligne : %s \n", first_line);
        map = map_loader(map_tmp, 10);
        if (!is_map_valid(map, 10))
            return (1);
	}
	else
	{
		(void)av;
	}
	return (0);
}
