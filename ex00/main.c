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

    if ((fd = open(path, O_RDONLY)) < 0)
    {
        write(1, "Map Error!\n", 11);
        exit(0);
    }

    return (fd);
}

void solve_and_print(int fd)
{
    char **map;
    int coord_x;
    int coord_y;
    int max_found;

    ft_map_reader(fd, &map);

    char obstacle = 'o';
    // char empty = '.';
    if (solve(map, 10, 30, obstacle, &coord_x, &coord_y, &max_found))
        // draw_map(map, coord_x, coord_y', obstacle, empty);
        printf("row: %d column: %d square_size: %d\n", coord_x, coord_y, max_found);

}

int main(int ac, char **av) {
    int to_solve;
    int fd;

    if (ac <= 1)
    {
        solve_and_print(0);
        exit(0);
    }

    to_solve = 0;

    while (++to_solve < ac) {
        fd = get_fd_or_exit(av[to_solve]);
        solve_and_print(fd);
        close(fd);
    }

    return (0);
}
