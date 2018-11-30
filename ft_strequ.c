/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:54:04 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 21:50:11 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = -1;
	while (s1[++i] == s2[i] && s1[i] && s2[i])
		if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			return (1);
	return (0);
}
