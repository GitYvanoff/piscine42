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

int	ft_map_reader(int ac, char **av)
{
	char **map;
	
	if (ac >= 1)
		map = ft_read_console();
	else
	{
		(void)av;
	}
	return (0);
}
