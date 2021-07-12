/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 03:03:17 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 03:21:39 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!(*(str + count) <= '9' && *(str + count) >= '0'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int main(void)
{
	char	tab_test[] = "aef2sdfgds";

	printf("%i", ft_str_is_numeric(tab_test));
}*/
