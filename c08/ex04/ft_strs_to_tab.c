/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 22:54:04 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/25 02:15:42 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char	*src)
{
	int		size;
	char	*str;
	char	*res;

	size = ft_strlen(src);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ((void *) 0);
	res = str;
	while (*src != '\0')
	{
		*str = *src;
		++str;
		++src;
	}
	*str = '\0';
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			count;
	t_stock_str	*tab;
	t_stock_str	try_struct;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	count = 0;
	while (count < ac)
	{
		try_struct.size = ft_strlen(av[count]);
		try_struct.str = av[count];
		try_struct.copy = ft_strdup(av[count]);
		tab[count] = try_struct;
		count++;
	}
	tab[count].size = 0;
	tab[count].str = 0;
	tab[count].copy = 0;
	return (tab);
}

/*int main(int ac, char **av)
{
	int	count;
	t_stock_str *ici;

	ici = ft_strs_to_tab(ac - 1, av + 1);
	count = 0;
	while (count < (ac - 1))
	{
		printf("--num  :%d\n", ici[count].size);
		printf("--str  :%s\n", ici[count].str);
		printf("--copy :%s\n\n", ici[count].copy);
		count++;
	}
}
*/
