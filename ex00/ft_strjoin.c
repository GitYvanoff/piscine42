/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:03:50 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/27 15:19:03 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_lenght;
	int		total_lenght;
	char	*tab;
	char	*cpytab;

	i = 0;
	sep_lenght = ft_strlen(sep);
	total_lenght = ft_tablen(size, strs) + (size - 1) * sep_lenght + 1;
	if (! size)
		total_lenght = 1;
	tab = malloc(total_lenght * sizeof(char));
	cpytab = tab;
	while (i < size)
	{
		ft_strcpy(&cpytab, strs[i++]);
		if (i != size)
			ft_strcpy(&cpytab, sep);
	}
	*cpytab = '\0';
	return (tab);
}

int	ft_tablen(int size, char **str)
{
	int	i;

	i = 0;
	while (--size >= 0)
		i += ft_strlen(str[size]);
	return (i);
}
