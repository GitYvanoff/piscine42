/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:14:17 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/22 17:05:17 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen_multi(char **str)
{
	int	count;
	int	i;
	int	total;

	i = 0;
	count = 0;
	total = 0;
	while (str[count][i] != '\0')
	{
		while (str[count][i] != '\0')
		{
			i++;
			total++;
		}
		count++;
		total++;
		i = 0;
	}
	return (total);
}

int	ft_strlen(char	*str)
{
	char	*ptr;
	int		i;

	ptr = str;
	i = 0;
	while (*ptr != 0)
	{
		i++;
		ptr++;
	}
	return (i);
}

void	ft_put_sep(char **concatptr, char *sep)
{
	while (*sep)
	{
		**concatptr = *sep;
		sep++;
		*concatptr += 1;
	}
}

void	ft_concat(int size, char *concatptr, char **strs, char *sep)
{
	int	n;
	int	i;

	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
		{
			*concatptr = strs[n][i];
			concatptr++;
			i++;
		}
		if (n == size - 1)
			*concatptr = 0;
		else if (*sep)
			ft_put_sep(&concatptr, sep);
		n++;
	}
	*concatptr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	char	*concatptr;
	int		nbchar;

	if (size)
	{
		nbchar = ft_strlen_multi(strs);
		concat = (char *)malloc(nbchar + ((ft_strlen(sep) - 1) * (size - 1)) + 1);
	}
	else
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	concatptr = concat;
	ft_concat(size, concatptr, strs, sep);
	return (concat);
}

/*int main()
{
	char *tablo[6];
	tablo[0] = "coucou";
	tablo[1] = "tanguy";
	tablo[2] = "fesse";
	tablo[3] = "de";
	tablo[4] = "la";
	tablo[5] = "merde";
	printf("%s\n", ft_strjoin(6, tablo, " sep "));
	return (0);
}*/
