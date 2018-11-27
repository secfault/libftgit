/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:04:08 by dtony             #+#    #+#             */
/*   Updated: 2018/11/23 12:04:08 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char    *destcpy;
    char    *srccpy;
    size_t  i;

    if (n == 0 || dest == src)
        return (dest);
    destcpy = (char *)dest;
    srccpy = (char *)src;
    i = 0;
    while (i <= n && srccpy[i] != c)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    return (dest);
}