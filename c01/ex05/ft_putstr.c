/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:31:26 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/10 21:43:37 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0') // null terminated string
	{
		count++;
	}
	write(1, str, count);
}

int	main(void)
{
	ft_putstr("hello");
}
