/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 21:36:33 by dtony             #+#    #+#             */
/*   Updated: 2018/11/12 13:26:48 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*cpy;

	i = -1;
	if (!(cpy = malloc(sizeof(*cpy) * ft_strlen(src))))
		return (0);
	while (src[++i])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}
