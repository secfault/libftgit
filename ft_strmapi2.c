/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 21:34:31 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 21:35:58 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	i = -1;
	while (s[++i])
	{
		if (!(map[i] = (char)malloc(sizeof(f(i, s[i])))))
			return (NULL);
		map[i] = f(i, s[i]);
	}
	if (!(map[i] = (char)malloc(sizeof(char))))
		return (NULL);
	map[i] = '\0';
	return (map);
}
