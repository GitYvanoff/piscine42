/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 01:33:08 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/13 13:06:04 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/*int	main(void)
{
	char *s1 = "hello";
	char *s2 = "helro";
	int	x;
	int xx;

	x = ft_strcmp(s1, s2);
	xx = strcmp(s1, s2);

	printf("%i", x);
	printf("%i", xx);
}*/
