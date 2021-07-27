/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:06:37 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/27 16:45:28 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BASE_H
# define FT_BASE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>// A DELETE

int		ft_map_reader(int ac, char **av);
char 	*ft_read_console(void);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_tablen(int size, char **str);
char    *get_first_line(char    *map);

#endif
