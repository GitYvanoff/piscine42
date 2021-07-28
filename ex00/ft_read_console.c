/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_console.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:32:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/28 14:49:44 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"
#define BUFFSIZE 4098

char *ft_read_console()
{
	char 	*map;
	char 	buf[BUFFSIZE];
	int		read_v;
	int		size;

	size = 0;
	read_v = 1;
	while (read_v > 0)
	{
		read_v = read(0 , buf, BUFFSIZE);
		size += read_v;
		printf("nb de valeur lu:%d\n", size);
		map = malloc(sizeof(char) * size + 1);
		if (map == NULL)
			return (NULL);
		map = ft_strjoin(map, buf);
	}
	map[size + 1] = '\0';
	return (map);
}
