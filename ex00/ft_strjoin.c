/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:03:50 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 14:49:52 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"
#include "string.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		str_len;
	char	*tab;	
	int		c;
	
//	printf("s1 :%s\n", s1);
//	printf("s2 :%s\n", s2);

	str_len = ft_strlen(s1) + ft_strlen(s2);
	tab = malloc (str_len * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (i < ft_strlen(s1))
		tab[c++] = s1[i++];
	i = 0;
	while (i < ft_strlen(s2))
	{
		tab[c++] = s2[i];
		i++;	
	}
	return (tab);
}
