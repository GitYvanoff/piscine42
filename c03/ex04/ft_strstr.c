/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:27:11 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 19:41:13 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	count;
	int	n;

	count = 0;
	n = 0;
	while (str[count] != '\0')
	{
		while (str[count] == to_find[n])
		{
			count++;
			n++;
			if (to_find[n] == '\0' )
			{
				return (&str[count - n]);
			}
			if (str[count] == '\0')
			{
				return ((void *)0);
			}
		}
		n = 0;
		count++;
	}
	return ((void *)0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello World!";
	str2 = "co";
	printf("strstr    : %ld\n", strstr(str1, str2) - str1);
	printf("ft_strstr : %ld\n", ft_strstr(str1, str2) - str1);
}

int main(void)
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
