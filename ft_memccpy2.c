/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 20:29:59 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 20:32:03 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	i;

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
