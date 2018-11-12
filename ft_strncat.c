/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 22:30:12 by dtony             #+#    #+#             */
/*   Updated: 2018/11/12 13:32:38 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *dest, const char *src, int nb)
{
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(dest);
	while (++i < nb && src[i] != '\0')
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
