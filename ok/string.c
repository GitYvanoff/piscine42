/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   string.c										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ypetruzz <marvin@42lausanne.ch>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/27 12:41:45 by ypetruzz		  #+#	#+#			 */
/*   Updated: 2021/07/28 22:33:05 by bcolin           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "string.h"
#include "ft_base.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	unsigned int	nb_unsigned;

	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		 nb_unsigned = (unsigned int)nb;
	if (nb_unsigned >= 10)
	{
		ft_putnbr(nb_unsigned / 10);
		ft_putnbr(nb_unsigned % 10);
	}
	else
		ft_putchar(nb_unsigned + '0');
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	write(1, str, count);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strlen_stop(char	*str, char	stop)
{
	int	count;

	count = 0;
	while (*(str + count) != stop)
	{
		count++;
	}
	return (count);
}
