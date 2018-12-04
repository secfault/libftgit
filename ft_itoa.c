/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:51:03 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 14:51:58 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		ng;
	int		ln;
	char	*itoa;

	i = 0;
	ng = 1;
	ln = ft_length_int(n);
	if (n < 0)
	{
		n = -n;
		ng = 2;
	}
	if (!(itoa = (char *)malloc(sizeof(char) * (ln + ng))))
		return (NULL);
	itoa[ln + ng - 1] = '\0';
	if (ng == 2)
	{
		itoa[i] = '-';
		ng = 1;
		i++;
	}
	while (n)
	{
		n /= 10;
		itoa[i] = n % 10 + '0';
		i++;
	}
	return (itoa);
}
