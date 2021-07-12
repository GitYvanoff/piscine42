/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:16:51 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 03:22:47 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!((*(str + count) >= 'a' && *(str + count) <= 'z')
				|| (*(str + count) >= 'A' && *(str + count) <= 'Z')))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int main(void)
{
	char	tab_test[] = "";

	printf("%i", ft_str_is_alpha(tab_test));
}*/
