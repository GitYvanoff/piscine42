/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:14:28 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/21 02:13:42 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_strlen_multi(char **str)
{
	int	count;
	int i;

	i = 0;
	count = 0;
	while (str[count][i] != '\0')
	{
		while (str[count][i] != '\0')
		{
			i++;
		}
		count++;
		i = 0;
	}
	return (count);
}

void ft_sep (char	*str,char	*sep,  int	*count_dest)
{
	int	count;

	count = 0;
	while (sep[count] != '\0')
	{
		str[*count_dest] = sep[count];
		count++;
		count_dest++;
	}
}

char *ft_strjoin(int	size, char	**strs, char	*sep)
{
	char	*dest;
	char	count;
	int			i;
	int			j;
	int	count_dest;

	i = 0;
	j = 0;
	count_dest = 0;
	count = 0;
	dest = malloc(sizeof(char) * ft_strlen_multi(strs) + ((size - 1) * (ft_strlen(sep))));
	while (count != size)
	{
		while (strs[i][j] != '\0')
		{
			dest[count_dest] = strs[i][j];
			i++;
			count_dest++;
		}
		i = 0;
		j++;
		count++;
		ft_sep(&dest[count_dest], sep, &count_dest);
	}
	return (dest);
}

int	main(int	ac, char	**av)
{
	if (ac != 3)
		return (1);
}
