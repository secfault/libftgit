/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:10:35 by dtony             #+#    #+#             */
/*   Updated: 2018/11/15 10:10:35 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t len)
{
    char    *destcpy;
    char    *srccpy;
    size_t  i;

    if (len == 0 || dest == src)
        return (dest);
    destcpy = (char *)dest;
    srccpy = (char *)src;
    i = 0;
    while (i <= len)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    return (dest);
}
