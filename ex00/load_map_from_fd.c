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

char *load_map_from_fd(int fd) {
    char    *result;
    char    *swap;
    char    buf[BUFFSIZE + 1];
    int     read_return;
    int     size;

    size = 1;
    result = (char *)malloc(sizeof(char) * 1);
    result[0] = 0;
    swap = NULL;
    while ((read_return = read(fd, buf, BUFFSIZE)) > 0)
    {
        buf[read_return] = 0;
        size += read_return;
        if (swap != NULL)
            free(swap);
        swap = (char *)malloc(sizeof(char) * (size + 1));
        swap = ft_strcpy(swap, result);
        swap = ft_strcat(swap, buf);
        free(result);
        result = ft_strdup(swap);
    }
    if (swap != NULL)
        free(swap);
    return result;
}
