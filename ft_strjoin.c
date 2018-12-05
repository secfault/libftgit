/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:57:01 by dtony             #+#    #+#             */
/*   Updated: 2018/12/05 10:57:03 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ret;

	i = -1;
	if (!(ret = (char *)malloc(sizeof(*s1) + sizeof(*s2) + sizeof(char))))
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	i = -1;
	while (s2[++i])
		ret[i + sizeof(*s1)] = s2[i];
	ret[i + sizeof(*s1)] = '\0';
	return (ret);
}
