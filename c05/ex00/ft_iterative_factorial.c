/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 21:06:06 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 18:34:32 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int	nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = 1;
	while (nb)
	{
		n = n * nb;
		nb--;
	}
	return (n);
}

/*int	main(int	argc, char	**argv)
{
	int	res;
	
	if(argc > 2)
		return (1);

	res = atoi(argv[1]);
	printf("%i\n", ft_iterative_factorial(res));
}*/
