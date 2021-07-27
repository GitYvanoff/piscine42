/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_console.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:32:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/27 17:31:28 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"
#define BUFFSIZE 4098

char **ft_read_console()
{
	char 	*map_tmp;
	char 	buf[BUFFSIZE];
	int		read_v;
	int		count;
//	char 	*line_map;
	
	count = -1;
	read_v = 1;
	while (read_v != 0)
	{
		read_v = read(0 , buf, BUFFSIZE);
		printf("oyoyoyoyoyyoyo\n");
	}
	map_tmp = (char*)malloc((read_v + 1) * sizeof(char));
	while (count++ < read_v)
		map_tmp[count] = buf[count];
	printf("\n MINE \n%s", map_tmp);

	return (0);
}
