/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 20:26:10 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 22:45:45 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		ng;
	int		ln;
	char	*itoa;

	i = -1;
	ng = 0;
	ln = ft_itoa_sizer(n);
	if (n < 0)
	{
		ng = 1;
		n = -n;
	}
	if (!(str = (char *)malloc(sizeof(char) * ln)))
		return (NULL);
	if (ng == 1)
		itoa[++i] = '-';
	while (n)
	{
		n /= 10;
		itoa[++i] = n % 10 + '0';
	}
	itoa[ln + ng - 1] = '\0';
	return (itoa);
}
