/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypetruzz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 02:35:56 by ypetruzz          #+#    #+#             */
/*   Updated: 2021/07/25 18:36:02 by ypetruzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char	*parser();

void	ft_putstr(char	*str);
void	ft_putchar(char	c);
int		ft_strlen(char	*str);
int		ft_strcmp(char	*s1, char	*s2);

#endif
