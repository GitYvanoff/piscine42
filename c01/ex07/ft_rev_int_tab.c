/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 00:20:25 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 22:09:36 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	stock;

	stock = *a;
	*a = *b;
	*b = stock;
}

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	from_left;

	if (size >= 2)
	{
		from_left = 0;
		while (from_left < --size)
		{
			ft_swap(&tab[from_left], &tab[size]);
			from_left++;
		}
	}
}

/*int	main(void)
{	
	int	b;
	int	tableau[15];
	int count;
	char test;

	b = 15;
	test = 'a';
	count = 0;
	while (count != b)
	{
		tableau[count] = test;
		test++;
		write(1, &tableau[count], 1);
		count++;
	}
	ft_rev_int_tab(&tableau[0], 15);
	count = 0;
	while (count != b)
	{
		write(1, &tableau[count], 1);
		count++;
	}
}*/
