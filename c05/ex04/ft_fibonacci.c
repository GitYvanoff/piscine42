/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:53:55 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/18 22:38:40 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int	index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(int	argc, char	**argv)
{
	int	result;

	if (argc < 2)
		return (0);
	result = atoi(argv[1]);	
	printf("%d", ft_fibonacci(result));
	printf("fibonacci of %d is %d\n", -3125, ft_fibonacci(-3125));
	printf("fibonacci of %d is %d\n", 0, ft_fibonacci(0));
	printf("fibonacci of %d is %d\n", 1, ft_fibonacci(1));
	printf("fibonacci of %d is %d\n", 2, ft_fibonacci(2));
	printf("fibonacci of %d is %d\n", 3, ft_fibonacci(3));
	printf("fibonacci of %d is %d\n", 15, ft_fibonacci(15));
	printf("fibonacci of %d is %d\n", 7, ft_fibonacci(7));
}*/
