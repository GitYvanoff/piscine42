/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:40:05 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/29 12:29:20 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_size_wrd(char	*str, char	*charset);
int		ft_in_str(char	c, char	*base);
int		ft_wrd_count(char	*str, char	*charset);
char	**ft_split(char	*str, char	*charset);

int	ft_size_wrd(char	*str, char	*charset)
{
	int	count;

	count = 0;
	while (str[count] && ft_in_str(str[count], charset) == -1)
		count++;
	return (count);
}

int	ft_in_str(char	c, char	*base)
{
	int	offset;

	offset = 0;
	while (*(base + offset))
		if (c == *(base + offset++))
			return (offset - 1);
	return (-1);
}

int	ft_wrd_count(char	*str, char	*charset)
{
	int	size;
	int	nb_words;

	nb_words = 0;
	while (*str)
	{
		while (*str && ft_in_str(*str, charset) != -1)
			str++;
		size = ft_size_wrd(str, charset);
		if (size)
		{
			nb_words++;
			str += size;
		}
	}
	return (nb_words);
}

char	**ft_split(char	*str, char	*charset)
{
	int		i;
	int		j;
	char	*wrd;
	char	**tab;

	i = 0;
	tab = malloc((ft_wrd_count(str, charset) + 2) * sizeof(char *));
	while (*str)
	{
		while (*str && ft_in_str(*str, charset) != -1)
			str++;
		j = 0;
		if (ft_size_wrd(str, charset))
		{
			wrd = malloc((ft_size_wrd(str, charset) + 1) * sizeof(char));
			while (*str && ft_in_str(*str, charset) == -1)
			{
				wrd[j++] = *(str++);
			}
			wrd[j] = '\0';
			tab[i++] = wrd;
		}
	}
	tab[i] = 0;
	return (tab);
}

/*int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("hello123, c,om,??ment vas-tu ?", ",-?");
	while (tab[i])
	{
		printf("#%d : \"%s\"\n", i, tab[i]);
		i++;
	}
}*/
