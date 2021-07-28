/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:48:20 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/20 21:52:23 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (argc != 1)
		return (1);
	ft_putstr(argv[0]);
	write(1, "\n", 1);
}
