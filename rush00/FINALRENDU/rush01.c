void	ft_putchar(char c);

int	line(char left_char, char inner_char, char right_char, int width)
{
	if (width == 1)
	{
		ft_putchar(left_char);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(left_char);
		while (width > 2)
		{
			ft_putchar(inner_char);
			width--;
		}
		ft_putchar(right_char);
		ft_putchar('\n');
	}
	return (0);
}

int	rush(int x, int y)
{
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	if (y == 1)
		line('/', '*', '\\', x);
	else if (x > 0 && y > 0)
	{
		line('/', '*', '\\', x);
		while (y > 2)
		{
			line('*', ' ', '*', x);
			y--;
		}
		line('\\', '*', '/', x);
	}
	return (0);
}
