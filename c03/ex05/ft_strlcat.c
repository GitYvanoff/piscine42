/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:22:20 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/13 22:53:58 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <strings.h>
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

unsigned	int	ft_strlcat(char *dest, char	*src, unsigned	int	size)
{
	int	dest_len;
	int	src_len;
	int	src_i;
	int	offset;

	dest_len = strlen(dest);
	src_len = strlen(src);
	offset = dest_len;
	src_i = 0;
	while (*(src + src_i) != '\0')
	{
		*(dest + offset) = *(src + src_i);
		offset++;
		src_i++;
		if (offset == size - 1)
			break ;
	}
	*(dest + offset) = '\0';
	return (dest_len + src_len);
}

/*int main(void)
{
	char dest[50] = "Bonjour, bienvenue au parc";
	char src[50] = " naturel de 42";

	printf("Test data :\nString : %s\nThing to add : %s\n", dest, src);
	printf("*****Original func result*****\n");
	strlcat(dest, src, 39);
	printf("%s\n\n", dest);
	ft_strlcat(dest, src, 39);
	printf("Test data :\nString : %s\nThing to add : %s\n", dest, src);
	printf("*****My func result*****\n");
	printf("%s\n\n", dest);
}*/
