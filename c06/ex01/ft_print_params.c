/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:52:05 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 13:57:36 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	write(1, str, count);
}

int	main(int	argc, char	**argv)
{
	int	count;

	count = 1;
	if (argc < 2)
		return (1);
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
}
