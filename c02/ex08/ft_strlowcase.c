/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:51:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 13:55:25 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) <= 'Z' && *(str + count) >= 'A')
		{
			*(str + count) = *(str + count) + ' ';
		}
		count++;
	}
	return (str);
}

/*int main(void)
{
	char	tab_test[] = "S_DaakueoF";
	
	printf("%s", tab_test);
	printf("%s", ft_strlowcase(tab_test));
}*/
