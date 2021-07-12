/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:11:26 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/12 18:26:17 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char	*str)
{
	int		i;
	int		set_upper;

	i = 0;
	set_upper = 1;
	while (str[i])
	{
		if (ft_islower(str[i]) || ft_isupper(str[i]) || ft_isdigit(str[i]))
		{
			if (set_upper && ft_islower(str[i]))
				str[i] = str[i] - 32;
			else if (!set_upper && ft_isupper(str[i]))
				str[i] = str[i] + 32;
			set_upper = 0;
		}
		else
			set_upper = 1;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char tab_test[] = "";

	printf("%s", ft_strcapitalize(tab_test));
}*/
