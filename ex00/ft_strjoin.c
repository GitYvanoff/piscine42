/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:03:50 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 10:37:37 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"
#include "string.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		str_len;
	char		*tab;	
	int		c;

	str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = malloc(str_len * sizeof(char));
	i = 0;
	c = 0;
	while (i < ft_strlen(s1))
	{
		tab[c++] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		tab[c++] = s2[i];
		i++;	
	}
	tab[c] = '\0';
	return (tab);
}
