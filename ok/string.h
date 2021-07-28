/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   string.h										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ypetruzz <marvin@42lausanne.ch>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/27 12:37:14 by ypetruzz		  #+#	#+#			 */
/*   Updated: 2021/07/28 22:34:46 by bcolin           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <unistd.h>

void	ft_putchar(char	c);
void	ft_putnbr(int	nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strdup_stop(char *src, char	stop);
int		ft_strlen(char *str);
int		ft_strlen_stop(char *str, char	stop);
char	*go_to_char(char *str, char c);
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strcpy(char *dest, char *src);

#endif
