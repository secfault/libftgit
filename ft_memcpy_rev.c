/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:51:28 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 21:19:50 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_rev(void *dest, const void *src, size_t len)
{
	unsigned char	*destcpy;
	unsigned char	*srccpy;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	while (len--)
		destcpy[len] = srccpy[len];
	return (dest);
}
