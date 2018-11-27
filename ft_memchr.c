/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:13:19 by dtony             #+#    #+#             */
/*   Updated: 2018/11/15 13:13:19 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (!(i > n) && s[i])
    {  
        if ((unsigned char)s[i] == c)
            return (s + i);
        i++;
    }
    return (NULL);
}
