/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 21:41:15 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 13:53:40 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
	{
		dest[i] = src [i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	test[12];
	char	strtab[] = "hello";
	unsigned int	test_n_l;
	unsigned int	i;

	test_n_l = 12;
	printf("%s\n", ft_strncpy(test, strtab, test_n_l));
	i = 0;
	while (i < test_n_l)
		printf("%x ", test[i++]);
	printf("\n");
	printf("%s\n", strncpy(test, strtab, test_n_l));
	i = 0;
	while (i < test_n_l)
		printf("%x ", test[i++]);
	printf("\n");
}*/
