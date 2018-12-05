/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:52:06 by dtony             #+#    #+#             */
/*   Updated: 2018/12/05 10:56:18 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*map;

	i = -1;
	while (s[++i])
	{
		if (!(map[i] = (char)malloc(sizeof(f(s[i])))))
			return (NULL);
		map[i] = f(s[i]);
	}
	if (!(map[i] = (char)malloc(sizeof(char))))
		return (NULL);
	map[i] = '\0';
	return (map);
}
