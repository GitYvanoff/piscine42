/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_base.h										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bcolin <marvin@42lausanne.ch>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/07/27 14:06:37 by bcolin			#+#	#+#			 */
/*   Updated: 2021/07/28 10:42:49 by ypetruzz		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef FT_BASE_H
# define FT_BASE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>// A DELETE
#include "solve.h"

int		ft_map_reader(int fd, Map *map);
char 	*load_map_from_fd(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_tablen(int size, char **str);
char	*get_first_line(char	*map);
int		ft_pow(int	x, int	y);
void	is_minus(int	*minus_count, char	  *str, int	   *count);
int	 ft_atoi(char	*str);

#endif
