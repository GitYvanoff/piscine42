/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:35:50 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/28 12:19:47 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"


int	main(int ac, char **av)
{
    int fd;

    if (ac > 1)
        fd = open(av[1], O_RDONLY);
    else
        fd = 0;
    if (fd < 0)
    {
        write(1, "Map Error!\n", 11);
        return (0);
    }
    ft_map_reader(fd);
    close(fd);
    return (0);
}
