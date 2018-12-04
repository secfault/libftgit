/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:34:02 by dtony             #+#    #+#             */
/*   Updated: 2018/12/01 22:19:26 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	i = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (s);
	while (s[i])
	{
		j = 0;
		while (s[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0' && i + j == len)
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
