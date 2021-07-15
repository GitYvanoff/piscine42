/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:27:01 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/15 18:47:37 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	count;
	int	count_src;

	count = 0;
	count_src = 0;
	while (dest[count] != '\0')
	{
		count++;
		if (dest[count] == '\0')
		{
			while (src[count_src] != '\0')
			{
				dest[count] = src[count_src];
				count++;
				count_src++;
			}
			dest[count] = '\0';
			return (dest);
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[50];
// 	char	dest[32];
// 	char	src2[50];
// 	char	dest2[32];
// 
// 	strcpy(src,  "This is source");
// 	strcpy(dest, "This is destination");
// 	strcpy(src2,  "This is source");
// 	strcpy(dest2, "This is destination");
// 	
// 	printf("TEST ORINIGAL STRCAT\n");
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	//strcat(dest, src);
// 	printf("TRAITEMENT PAR STRCAT :\n");
// 	printf("%s\n\n", dest);
// 
// 	printf("TEST ft_strcat ft_strcat\n");
// 	printf("%s\n", src2);
// 	printf("%s\n", dest2);
// 	ft_strcat(dest2, src2);
// 	printf("TRAITEMENT PAR ft_strcat :\n");
// 	printf("%s\n", src2);
// 	printf("%s\n", dest2);
// }
