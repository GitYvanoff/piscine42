char	**draw_square(int	start_x, int	start_y, int	width, char	**map, char	*input_list)
{
	int	x;
	int	y;

	y = 0;
	while (y < width)
	{
		x = 0;
		while (x < width)
		{
			if (map[y][x] == obstacle)
				return(0);
			map[y][x] = input[2];
		}

	}
}
