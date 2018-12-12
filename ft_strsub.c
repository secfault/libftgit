/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:15:28 by dtony             #+#    #+#             */
/*   Updated: 2018/12/12 19:14:52 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	if (s)
	{
		i = 0;
		if (!(ret = (char *)malloc(len + 1)))
			return (NULL);
		ret[len] = 0;
		ft_memcpy(ret, s + start, len);
		return (ret);
	}
	return (NULL);
}
