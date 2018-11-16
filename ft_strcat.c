/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 22:22:38 by dtony             #+#    #+#             */
/*   Updated: 2018/11/12 13:29:43 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(dest);
	while (src[++i])
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
