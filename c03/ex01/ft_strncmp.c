/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 01:55:59 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/13 14:22:52 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned	int	n)
{	
	int	count;

	count = 0;
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2 && count < n)
	{
		s1++;
		s2++;
		count++;
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
	char	*s1 = "helro";
	char	*s2 = "hello";
	int	x;
	int	y;

	x = ft_strncmp(s1, s2, 4);
	printf("%i\n", x);

	y = strncmp(s1, s2, 4);
	printf("%i", y);
}*/
