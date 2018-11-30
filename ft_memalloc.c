/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:46:38 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 21:39:26 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	int		*tab;

	i = 0;
	if (!(tab = (int *)malloc((size + 1) * sizeof(int))))
	{
		return (NULL);
	}
	while(!(i < size))
	{
		tab[i] = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
