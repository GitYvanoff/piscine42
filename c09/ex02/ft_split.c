/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:40:05 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/28 11:36:54 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_strcpy(char	*str, int	offset, int	i, char	**tab)
{
	int		diff;
	int		c;

	c = 0;
	diff = i - offset;
	while (diff < i)
	{
		tab[0][c] = str[diff];
		diff++;
		c++;
	}
	tab[0][c] = '\0';
}

char	*ft_create_tab(int	*offset, int	i, char	*str, int	*dc)
{
	char	*tab;

	tab = malloc(1 + *offset * sizeof(char));
	ft_strcpy(str, *offset, i, &tab);
	*dc += 1;
	*offset = 0;
	return (tab);
}

char	*ft_add_final_tab(int	*dc)
{
	char	*tab;

	*dc += 1;
	tab = malloc(2 * sizeof(char));
	tab[0] = 0;
	tab[1] = '\0';
	return (tab);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**dest;
	int		offset;
	int		i;
	int		check;
	int		dc;

	dest = malloc(sizeof(char *) * ft_strlen(str) + 1);
	dc = -1;
	offset = 0;
	i = -1;
	while (str[++i])
	{
		check = -1;
		while (check++ < ft_strlen(charset))
		{
			if (str[i] == charset[check])
				dest[dc] = ft_create_tab(&offset, i, str, &dc);
			while (str[i] == charset[check])
				i++;
		}
		offset++;
	}
	dest[dc] = ft_create_tab(&offset, i, str, &dc);
	dest[dc] = ft_add_final_tab(&dc);
	return (dest);
}

/*int		main(int	ac, char	**av)
{
	char	**tab;
	int			i;
	if (ac != 3)
		return (1);
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
	printf("resu:%s\n", tab[i]);
		i++;
	}
}*/
