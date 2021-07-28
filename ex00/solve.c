#include "solve.h"

int is_square_free(
    char **map,
    int row,
    int column,
    int square_size,
    char obstacle)
{
    int x;
    int y;

    y = -1;
    while (++y < square_size)
    {
        x = -1;
        while (++x < square_size)
        {
            if (map[row+y][column+x] == obstacle)
                return (0);
        }
    }

    return (1);
}

int solve(
    char **map,
    int width,
    int height,
    char obstacle,
    int *max_found,
    int *max_x,
    int *max_y)
{
    int column;
    int row;
    int square_size;

    *max_found = -1;

    row = -1;
    while (++row < height)
    {
        column = -1;
        while (++column < width)
        {
            square_size = 0;
            while (
                ++square_size + row < height
                && square_size + column < width
            )
            {
                if (is_square_free(
                     map,
                     row,
                     column,
                     square_size,
                     obstacle)
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
