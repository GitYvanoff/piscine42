/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:41:45 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/27 12:49:22 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "ft_base.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	unsigned int	nb_unsigned;

	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		 nb_unsigned = (unsigned int)nb;
	if (nb_unsigned >= 10)
	{
		ft_putnbr(nb_unsigned / 10);
		ft_putnbr(nb_unsigned % 10);
	}
	else
		ft_putchar(nb_unsigned + '0');
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	write(1, str, count);
}

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

int	ft_strlen_stop(char	*str, char	stop)
{
	int	count;

	count = 0;
	while (*(str + count) != stop)
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

char	*ft_strdup_stop(char	*src, char	stop)
{
	int		size;
	char	*str;
	char	*res;

	size = ft_strlen(src);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ((void *) 0);
	res = str;
	while (*src != stop)
	{
		*str = *src;
		++str;
		++src;
	}
	*str = '\0';
	return (res);
}

char    *go_to_char(char *str, char c)
{
    while (*str && *str != c)
        str++;
    return (str);
}

char	*ft_strcpy(char *dest, char *src)
{
    int	n;

    n = 0;
    while (*(src + n) != '\0')
    {
        *(dest + n) = *(src + n);
        n++;
    }
    *(dest + n) = *(src + n);
    return (dest);
}

char	*ft_strcat(char	*dest, char	*src)
{
    unsigned int	count;
    unsigned int	size_dest;

    count = 0;
    size_dest = ft_strlen(dest);
    while (src[count] != '\0')
    {
        dest[size_dest + count] = src[count];
        count++;
    }
    dest[size_dest + count] = '\0';
    return (dest);
}