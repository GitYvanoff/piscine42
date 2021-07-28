/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 02:52:43 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/23 03:04:53 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check1(char	*src,	char	*dest)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == dest[count])
			return (0);
		
		i++;
	}
}
