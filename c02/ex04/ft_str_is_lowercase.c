/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:15:43 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 00:24:41 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!(*(str + count) <= 'z' && *(str + count) >= 'a'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int main(void)
{
	char	tab_test[] = "aefsdfGds";

	printf("%i", ft_str_is_lowercase(tab_test));
}*/
