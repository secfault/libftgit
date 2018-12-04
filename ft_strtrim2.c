/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:22:29 by dtony             #+#    #+#             */
/*   Updated: 2018/12/03 22:23:23 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*trim;

	i = 0;
	j = 0;
	if (!(trim = (char *)malloc(sizeof(*s) + sizeof(char))))
		return (NULL);
	while (s[i] < 33 && s[i] == ',' && s[i])
		i++;
	while (s[i])
	{
		trim[j] = s[i];
		i++;
	}
	while (trim[j] < 33 && trim[j] == ',')
		j--;
	free(trim + (j + 1));
	ft_strclr(trim + (j + 1));
	return (trim);
}
