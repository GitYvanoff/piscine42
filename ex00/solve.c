#include "solve.h"

int is_square_free(
    Map map,
    int row,
    int column,
    int square_size)
{
    int x;
    int y;

    y = -1;
    while (++y < square_size)
    {
        x = -1;
        while (++x < square_size)
        {
            if (map.grid[row+y][column+x] == map.obstacle)
                return (0);
        }
    }

    return (1);
}

int solve(
    Map map,
    int *max_x,
    int *max_y,
    int *max_found)
{
    int column;
    int row;
    int square_size;

    *max_found = -1;

    row = -1;
    while (++row < map.height)
    {
        column = -1;
        while (++column < map.width)
        {
            square_size = 0;
            while (
                ++square_size + row < map.height
                && square_size + column < map.width
            )
            {
                if (is_square_free(
                     map,
                     row,
                     column,
                     square_size)
                    && square_size > *max_found
                )
                {
                    *max_found = square_size;
                    *max_x = column;
                    *max_y = row;
                }
            }
        }
    }

    return (*max_found > 0);
}
