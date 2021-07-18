/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:59:41 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 16:41:39 by ypetruzz         ###   ########.fr       */
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
	int	count;

	count = argc - 1;
	if (argc == 0)
		return (1);
	while (count > 0)
	{
		ft_putstr(argv[count]);
		ft_putstr("\n");
		count--;
	}
}
