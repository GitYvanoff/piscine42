/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:27:11 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 23:28:17 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
	{
		if (! (*(s1 + i) == *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	unsigned int	count;
	unsigned int	size_str;
	unsigned int	size_to_find;

	count = 0;
	size_str = ft_strlen(str);
	size_to_find = ft_strlen(to_find);
	if (! to_find)
		return (str);
	while ((size_str - count) >= size_to_find)
	{
		if (! ft_strncmp(str + count, to_find, size_to_find))
			return (str + count);
		count++;
	}
	return ((void *)0);
}

/*int main(void)
{
	char *str = "Bonjour, bienvenue au parc";
	char *to_find = "au parc naturel";
	char *ptr;

	ptr = strstr(str, to_find);

	printf("Test data :\nString : %s\nNeedle : %s\n", str, to_find);
	printf("*****Original func result*****\n");
	printf("%s\n\n", ptr);
	ptr = ft_strstr(str, to_find);
	printf("Test data :\nString : %s\nNeedle : %s\n", str, to_find);
	printf("*****My func result*****\n");
	printf("%s\n\n", ptr);
}*/
