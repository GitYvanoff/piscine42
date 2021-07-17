/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:53:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 00:33:41 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int	index)
{
	int	nb1;
	int	nb2;

	nb2 = 1;
	nb2 = 1;
	index--;
	while (index != 0)
	{
		nb1 = nb1 + nb2;
		nb2 = nb1 - nb2;
		ft_fibonacci(index--);
	}
	return (nb1);
}

/*int	main(int	argc, char	**argv)
{
	int	result;

	if (argc < 2)
		return (0);
	result = atoi(argv[1]);	
	printf("%i", ft_fibonacci(result));
}*/
