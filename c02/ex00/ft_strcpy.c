/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:40:23 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/11 20:17:01 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	strlen;
	int	count;

	strlen = ft_strlen(dest);
	count = 0;
	while (count <= strlen)
	{
		*(src + count) = *(dest + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}

/*int	main(void)
{
	char	test[5];
	char	strtab[] = "hello";

	printf("%s", ft_strcpy(strtab, test));
}*/
