/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:23:00 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/14 00:25:12 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!(*(str + count) <= 'Z' && *(str + count) >= 'A'))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int main(void)
{
	char	tab_test[] = "SDFS_DF";

	printf("%i", ft_str_is_uppercase(tab_test));
}*/
