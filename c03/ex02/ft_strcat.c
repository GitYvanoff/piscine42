/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:27:01 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 23:22:24 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

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

/*int	main(void)
{
 	char	src[15];
 	char	dest[36];
 	char	src2[15];
 	char	dest2[36];
 
 	strcpy(src,  "This is source");
 	strcpy(dest, "This is destination");
 	strcpy(src2,  "This is source");
 	strcpy(dest2, "This is destination");
 	
 	printf("TEST ORINIGAL STRCAT\n");
 	printf("%s\n", src);
 	printf("%s\n", dest);
 	strcat(dest, src);
	printf("TRAITEMENT PAR STRCAT :\n");
	printf("%s\n\n", dest);

	printf("TEST ft_strcat ft_strcat\n");
	printf("%s\n", src2);
	printf("%s\n", dest2);
	ft_strcat(dest2, src2);
	printf("TRAITEMENT PAR ft_strcat :\n");
	printf("src2 : %s\n", src2);
	printf("dest2: %s\n", dest2);
}*/
