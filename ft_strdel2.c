/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 20:55:55 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 20:56:52 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	size_t i;

	i = 0;
	while (as[i])
	{
		free(as[i]);
		i++;
	}
	free(as);
	as = NULL;
}
