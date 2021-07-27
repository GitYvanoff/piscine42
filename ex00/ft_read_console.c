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
	int		read_v;
	int		count;
	
	count = -1;
	read_v = 1;
	read_v = read(0 , buf, BUFFSIZE);
	map = (char*)malloc((read_v + 1) * sizeof(char));
	while (count++ < read_v)
		map[count] = buf[count];
	return (map);
}
