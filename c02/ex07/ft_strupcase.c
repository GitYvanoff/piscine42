/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:38:46 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 13:50:10 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (*(str + count) <= 'z' && *(str + count) >= 'a')
		{
			*(str + count) = *(str + count) - ' ';
		}
		count++;
	}
	return (str);
}

/*int main(void)
{
	char	tab_test[] = "S_DaakueoF";
	
	printf("%s", tab_test);
	printf("%s", ft_strupcase(tab_test));
}*/
