/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 22:30:12 by dtony             #+#    #+#             */
/*   Updated: 2018/08/14 16:24:39 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(dest);
	while (++i < nb && src[i] != '\0')
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
