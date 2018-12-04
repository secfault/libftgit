/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:21:40 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 22:25:35 by dtony            ###   ########.fr       */
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
	while (!(i < size))
	{
		tab[i] = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
