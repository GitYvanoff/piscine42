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

int	ft_map_reader(int ac, char **av)
{
	char *map_tmp;
	char *first_line;
	
	if (ac >= 1)
	{
		map_tmp = ft_read_console();
		printf("je suis la map\n %s", map_tmp);
		first_line = get_first_line(map_tmp);
		printf("\n Je suis la premiere ligne : %s \n", first_line);
	}
	else
	{
		(void)av;
	}
	return (0);
}
