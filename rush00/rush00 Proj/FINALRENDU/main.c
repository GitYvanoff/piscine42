/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.c                                               :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnicolie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*   By: ypetruzz <marvin@42lausanne.ch>          +#+#+#+#+#+   +#+           */
/*   By: jjaqueme <marvin@42lausanne.ch>               #+#    #+#             */
/*                                                    ###   ########.fr       */
/*   Created: 2021/07/10 15:12:55 by team                                     */
/*   Updated: 2021/07/11 15:15:00 by team                                     */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	rush(-4, -3);
	rush(-5, 9);
	rush(5, -9);
	rush(0, 0);
	return (0);
}
