/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ypetruzz <marvin@42lausanne.ch>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/14 18:12:41 by ypetruzz		  #+#	#+#			 */
/*   Updated: 2021/07/28 22:57:30 by bcolin           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

//#include <stdio.h>

int	ft_pow(int	x, int	y)
{
	int	cmpt;
	int	res;

	cmpt = 0;
	res = 1;
	while (cmpt < y)
	{
		res = res * x;
		cmpt++;
	}
	return (res);
}

void	is_minus(int	*minus_count, char	*str, int	*count)
{
	if (str[*count] == '-')
		*minus_count = *minus_count + 1;
	*count = *count + 1;
}

int	ft_atoi(char	*str)
{
	int	count;
	int	offset;
	int	i;
	int	minus_count;
	int	res;

	offset = 0;
	res = 0;
	minus_count = 0;
	count = 0;
	i = 0;
	while (str[count] == ' ')
		count++;
	while (str[count] == '-' || str[count] == '+')
		is_minus(&minus_count, str, &count);
	while (str[count + offset] - '0' >= 0 && str[count + offset] - '0' <= 9)
		offset++;
	while (i < offset)
	{
		res += ((str[count + i] - '0') * ft_pow(10, (offset - 1 - i)));
		i++;
	}
	if (minus_count % 2 == 1)
		res = res * -1;
	return (res);
}
