#include "ft_base.h"

char	*get_first_line(char *map)
{
	return (ft_strdup_stop(map, '\n'));
}

int	get_lines_count(char *first_line)
{
	if (first_line[0] > '9' || first_line[0] < '0')
		return (-1);
	return (ft_atoi(first_line));
}
