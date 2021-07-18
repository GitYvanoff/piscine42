/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 00:35:54 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 03:38:53 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int	nb)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i++ < 46345)
	{
		res = i * i;
		if (res == nb)
			return (i);
		if (res > nb)
			return (0);
	}
	return (0);
}

/*int	main(int	argc, char	**argv)
{
	int	res;
	
	if (argc != 2)
		return (1);
	res = atoi(argv[1]);
	printf("%i", ft_sqrt(res));
}*/
