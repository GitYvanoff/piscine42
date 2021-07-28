#ifndef SOLVE_H
# define SOLVE_H

typedef struct s_map {
	char	**grid;
	int		width;
	int		height;
	char	obstacle;
	char	empty;
	char	filler;
}	t_map;

int	solve(t_map	map, int	*max_x, int	*max_y, int	*max_found);

#endif
