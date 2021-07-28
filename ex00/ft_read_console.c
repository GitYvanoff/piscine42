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

char *ft_read_console()
{
	char 	*map;
	char 	buf[BUFFSIZE];
	int	read_v;
	
	read_v = 1;
	while (read_v > 0)
	{
		read_v = read(0 , buf, BUFFSIZE);
		map = malloc(sizeof(char) * read_v + 1);
		map = ft_strjoin(map, buf);
	}
	return (map);
}
