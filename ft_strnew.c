/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:32:58 by dtony             #+#    #+#             */
/*   Updated: 2018/11/21 16:32:58 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    size_t  i;
    char    *str;

    i = 0;
    if (!(str = (char *)malloc((size + 1) * sizeof(char))))
    {
        return (NULL);
    }
    while (!(i > size))
    {
        str[i] = '\0';
        i++;
    }
    str[i] = '\0';
    return (str);
}