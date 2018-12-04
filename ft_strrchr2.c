/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:39:22 by dtony             #+#    #+#             */
/*   Updated: 2018/12/04 17:39:53 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*save;
	char	*ret;

	save = ft_strchr(str, c);
	ret = save;
	while (save != NULL)
	{
		save = ft_strchr(save, c);
		if (save != NULL)
			ret = save;
	}
	return (ret);
}
