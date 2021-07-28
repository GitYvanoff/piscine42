/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:21:02 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/23 01:03:56 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*alpha_mirror(char	**str)
{
	int	count;

	count = 0;
	while (str[1][count] != '\0')
	{
		if (str[1][count] >= 'a' && str[1][count] <= 'z')
		{
			str[1][count] = 'm' - (str[1][count] - 'n');
		}
		else if (str[1][count] >= 'A' && str[1][count] <= 'Z')
		{
			str[1][count] = 'M' - (str[1][count] - 'N');
		}
		count++;
	}
	return (0);
}

int	main(int	ac, char	**av)
{
	char	*str;

	if (ac != 2)
		return (1);
	alpha_mirror(av);
	printf("Phrase de sortie :\n%s\n", av[1]);
	return (0);
}
