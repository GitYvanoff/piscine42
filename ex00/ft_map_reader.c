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

void    map_validator(char **map)
{

    return ;
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
        map_validator(map, 10);
	}
	else
	{
		(void)av;
	}
	return (0);
}
