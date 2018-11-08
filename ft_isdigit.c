/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:17:23 by dtony             #+#    #+#             */
/*   Updated: 2018/11/08 17:31:02 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			return (0);
	}
	return (1);
}
