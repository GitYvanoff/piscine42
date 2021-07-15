/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:04:42 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 23:24:12 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char	*dest, char	*src, unsigned	int	nb)
{
	unsigned int	count;
	unsigned int	size_dest;

	count = 0;
	size_dest = ft_strlen(dest);
	while (src[count] != '\0' && count < nb)
	{
		dest[size_dest + count] = src[count];
		count++;
	}
	dest[size_dest + count] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[50];
	char	dest[50];
	char	src2[50];
	char	dest2[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcpy(src2,  "This is source");
	strcpy(dest2, "This is destination");

	printf("TEST ORINIGAL STRCAT\n");
	printf("%s\n", src);
	printf("%s\n", dest);
	strncat(dest, src, 4);
	printf("TRAITEMENT PAR STRCAT :\n");
	printf("%s\n", src2);
	printf("%s\n\n", dest);

	printf("TEST ft_strcat ft_strcat\n");
	printf("%s\n", src2);
	printf("%s\n", dest2);
	ft_strncat(dest2, src2, 4);
	printf("TRAITEMENT PAR ft_strcat :\n");
	printf("%s\n", src2);
	printf("%s\n", dest2);
}*/
