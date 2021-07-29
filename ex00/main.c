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
#include "solve.h"


int get_fd_or_exit(char *path) {
    int fd;

    if ((fd = open(path, O_RDONLY)) < 0);
    {
        write(1, "Map Error!\n", 11);
        exit(0);
    }
    return (fd);
}


int main(int ac, char **av) {
    int fd;
    char **map;
    int to_solve;
    int coord_x;
    int coord_y;

    to_solve = 1;
    if (ac > 1)
        fd = get_fd_or_exit(av[to_solve]);
    else
        fd = 0;

    while (to_solve < ac || fd == 0) {
        ft_map_reader(fd, &map);

        char obstacle = 'o';
        // char empty = '.';
        if (solve(map, 10, 30, obstacle, &coord_x, &coord_y))
            // draw_map(map, coord_x, coord_y', obstacle, empty);
            printf("%d %d\n", coord_x, coord_y);

        close(fd);
        to_solve++;
        if (fd != 0)
            fd = get_fd_or_exit(av[to_solve]);
        else
            return (0);
    }

    close(fd);

    return (0);
}
