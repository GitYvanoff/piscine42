/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_from_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:10:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 22:58:53 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"
#include "string.h"
#define BUFFSIZE 4098

char	*resize_str(char	*str, int	size)
{
	char	*swap;

	swap = ft_strdup(str);
	if (str != NULL)
		free(str);
	str = (char *)malloc(sizeof(char) * size);
	str = ft_strcpy(str, swap);
	free(swap);
	return (str);
}

char	*load_map_from_fd(int	fd)
{
	char	*result;
	char	buf[BUFFSIZE + 1];
	int		read_return;
	int		size;

	size = 1;
	result = (char *)malloc(sizeof(char) * 1);
	result[0] = 0;
	read_return = read(fd, buf, BUFFSIZE);
	while (read_return > 0)
	{
		buf[read_return] = 0;
		size += read_return;
		result = resize_str(result, size);
		result = ft_strcat(result, buf);
	}
	return (result);
}
