/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_reader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:50:03 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 13:13:59 by ypetruzz         ###   ########.fr       */
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

int	get_lines_count(char	*first_line)
{
	if (first_line[0] > '9' || first_line[0] < '0')
		return(-1);
	return(ft_atoi(first_line));
}

char	**map_loader(char	*str, int	lines_count)
{
	char	**map;
	int		y;

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

int	validate_char(char	c, char	*allowed)
{
	return (c == allowed[0] || c == allowed[1]);
}

int	is_map_valid(char	**map, int	lines_count, char	*allowed_chars) //TODO:add a param to send valid chars
{
	int	expected_width;
	int	y;
	int	x;
	int	line_length;

	y = 0;
	expected_width = ft_strlen(map[y]);
	while (y < lines_count)
	{
		line_length = ft_strlen(map[y]);
		x = 0;
		if (line_length != expected_width)
			return (1);
		while (x < line_length)
			if (!validate_char(map[y][x++], allowed_chars)) //TODO: send allowed chars
				return (1);
		y++;
	}
	return (0);
}

char	*get_allowed_chars(char	*first_line)
{
	char	*allowed_chars;	
	int		count;
	int		count_al;

	count = 0;
	count_al = 0;
	while (first_line[count] >= '0' && first_line[count] <= '9')
		count++;
	allowed_chars = malloc(ft_strlen(&first_line[count]) * sizeof(char));
	while (first_line[count] != '\0')
	{
		allowed_chars[count_al] = first_line[count];
		count++;
		count_al++;
	}
	allowed_chars[count_al] = '\0';
	return (allowed_chars);
}

int	ft_map_reader(int	ac, char	**av)
{
	char	*map_tmp; //code smell
	char	*first_line;
	char	**map;
	int		lines_count;
	char	*allowed_chars;


	if (ac >= 1)
	{
		map_tmp = ft_read_console(); //eurk
		printf("je suis la map\n %s", map_tmp);
		first_line = get_first_line(map_tmp);
		printf("\n Je suis la premiere ligne : %s \n", first_line);
		lines_count = get_lines_count(first_line);
        printf("Je suis le nombre de lignes %d\n", lines_count);
		allowed_chars = get_allowed_chars(first_line);
		printf("Nous sommes les allowed chars :%s\n", allowed_chars);
		map = map_loader(map_tmp, lines_count);
			if (!is_map_valid(map, lines_count, allowed_chars))
					return (1);
	}
	else
	{
		(void)av;
	}
	return (0);
}
