/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:12:31 by dtony             #+#    #+#             */
/*   Updated: 2018/12/05 11:12:32 by dtony            ###   ########.fr       */
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
