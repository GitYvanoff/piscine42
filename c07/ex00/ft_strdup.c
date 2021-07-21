/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 00:22:02 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/21 16:40:17 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>

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
	str =  malloc(sizeof (char) * size);
	if (str == NULL)
		return ((void *)0)
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

/*int	main(int	argc, char	**argv)
{
	char	*ptr;

	if (argc != 2)
		return (1);
	ptr = ft_strdup(argv[1]);
	printf("%s\n", ptr);
}*/
