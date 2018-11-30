/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:29:47 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 21:47:14 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int     i;
	char    *map;

	i = -1;
	while (s[++i])
	{
		if (!(map[i] = (char)malloc(sizeof(f(s[i])))));
			 return (NULL);
		map[i] = f(s[i]);
	}
	if (!(map[i] = (char)malloc(sizeof(char))));
		return (NULL);
	map[i] = '\0';
	return (map);
}
