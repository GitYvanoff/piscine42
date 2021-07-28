#ifndef SOLVE_H
# define SOLVE_H

typedef struct s_map {
    char **grid;
    int width;
    int height;
    char obstacle;
    char empty;
    char filler;
} Map;

int solve(
    Map map,
    int *max_x,
    int *max_y,
    int *max_found
);

#endif
