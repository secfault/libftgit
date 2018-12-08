/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:50:50 by dtony             #+#    #+#             */
/*   Updated: 2018/12/08 14:48:27 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		ng;
	char	*itoa;

	ng = 0;
	if (n < 0)
	{
		ng = 1;
		n = -n;
	}
	if (!(itoa = (char *)malloc(sizeof(char) * (ft_itoa_sizer(n) + 1))))
		return (NULL);
	if (ng == 1)
		itoa[0] = '-';
	i = (ng == 1) ? ft_itoa_sizer(n) + 1 : ft_itoa_sizer(n);
	itoa[i + 1] = '\0';
	while (n)
	{
		itoa[i] = n % 10 + '0';
		n /= 10;
	}
	return (itoa);
}
