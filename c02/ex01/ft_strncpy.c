/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 21:41:15 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 01:58:03 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;
	unsigned int	end;

	i = 0;
	end = 0;
	while (i < n)
	{	
		if (*(src + 1) == '\0' || end)
		{
			*(dest + i) = '\0';
			end = i;
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	test[6];
	char	strtab[] = "hello";
	unsigned int	test_n_l;

	test_n_l = 3;
	printf("%s", ft_strncpy(test, strtab, test_n_l));
	printf("\n");
	printf("%s", strncpy(test, strtab, test_n_l));
}*/
