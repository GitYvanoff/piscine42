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

void	remove_neg(int	*axe_x, int	*axe_y)
{
	if (*axe_x < 0)
		*axe_x = *axe_x * -1;
	if (*axe_y < 0)
		*axe_y = *axe_y * -1;
}

void	one_is_neg(int	x, int	y)
{
	remove_neg(&x, &y);
	if (y == 1 && x != 0)
	{
		line('C', 'B', 'A', x);
	}
	else if (x > 0 && y > 0)
	{
		line('C', 'B', 'A', x);
		while (y-- > 2)
		{
			line('B', ' ', 'B', x);
		}
		line('A', 'B', 'C', x);
	}
}

void	both_pos_or_neg(int	x, int	y)
{
	remove_neg(&x, &y);
	if (y == 1 && x != 0)
	{
		line('A', 'B', 'C', x);
	}
	else if (x > 0 && y > 0)
	{
		line('A', 'B', 'C', x);
		while (y-- > 2)
		{
			line('B', ' ', 'B', x);
		}
		line('C', 'B', 'A', x);
	}
}

int	rush(int	x, int	y)
{
	if (x < 0 ^ y < 0)
	{
		one_is_neg(x, y);
	}
	else
	{
		both_pos_or_neg(x, y);
	}
	return (0);
}
