/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map_from_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:32:01 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/28 14:49:44 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"
#include "string.h"
#define BUFFSIZE 4098


char *resize_str(char *str, int size)
{
    char *swap;

    swap = ft_strdup(str);
    if (str != NULL)
        free(str);
    str = (char *)malloc(sizeof(char) * size);
    str = ft_strcpy(str, swap);
    free(swap);
    return (str);
}


char *load_map_from_fd(int fd) {
    char    *result;
    char    buf[BUFFSIZE + 1];
    int     read_return;
    int     size;

    size = 1;
    result = (char *)malloc(sizeof(char) * 1);
    result[0] = 0;
    while ((read_return = read(fd, buf, BUFFSIZE)) > 0)
    {
        buf[read_return] = 0;
        size += read_return;
        result = resize_str(result, size);
        result = ft_strcat(result, buf);
    }
    return result;
}
