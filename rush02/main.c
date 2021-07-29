/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:03:10 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/24 20:48:58 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
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

#define BUFFSIZE 1
char	**ft_parse_tab()
{
	int 	readSize;
	int 	fd;
	char	 buf[BUFFSIZE + 1];
	char	*line;
	char	*copy;
	char	**lines;
	int		i;
	int		linesCount;

	linesCount = 0;
	lines = malloc(sizeof(char *) * 2032392);
	buf[BUFFSIZE] = 0;
	fd = open("numbers.dict", O_RDONLY);
	readSize = BUFFSIZE;
	while (readSize > 0)
	{
		copy = malloc(sizeof(char) * 2);
		line = malloc(sizeof(char) * 2);
		readSize = 1;
		copy[0] = 0;
		copy[1] = 0;
		buf[0] = 1;
		i = 1;
		while (buf[0] && buf[0] != '\n')
		{
			readSize = read(fd, buf, BUFFSIZE);
			if (buf[0] == '\n' || buf[0] == 1)
				break;
			free(line);
			line = malloc(sizeof(char) * (i + 2));
			line[0] = 0;
			line[i + 1] = 0;
			copy = ft_strcat(copy, buf);
			line = ft_strcpy(line, copy);
			free(copy);
			copy = malloc(sizeof(char) * (i + 3));
			copy[i + 1] = 0;
			strcpy(copy, line);
			i++;
		}
		lines[linesCount] = malloc(sizeof(char) * ft_strlen(line));
		lines[linesCount] = ft_strcpy(lines[linesCount], line);
		linesCount++;
	}
	linesCount--;
	printf("%i\n", linesCount);
	for (int j = 0; j < linesCount; j++)
	{
		printf("%i : %s\n", j, lines[j]);
	}
	return(lines);
}

int main()
{
	ft_parse_tab();
}
