/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:04:42 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/13 16:26:05 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char	*dest, char	*src, unsigned	int	nb)
{
	int	count;
	int	count_src;

	count = 0;
	count_src = 0;
	while (dest[count++] != '\0')
	{
		if (dest[count] == '\0')
		{
			while (src[count_src] != '\0')
			{
				dest[count] = src[count_src];
				count++;
				count_src++;
				while (nb == count_src)
				{
					dest[++count] = '\0';
					return (dest);
				}
			}
			dest[count] = '\0';
			return (dest);
		}
	}
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
