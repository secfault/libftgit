/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:49:25 by dtony             #+#    #+#             */
/*   Updated: 2018/11/23 13:49:25 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  l;
    char    *ret;

    i = 0;
    l = len - (size_t)start;
    if (!(ret = (char *)malloc(sizeof(char) * l + 1)))
        return (NULL);
    while (!(i > l))
    {
        ret[i] = s[(size_t)start + i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
