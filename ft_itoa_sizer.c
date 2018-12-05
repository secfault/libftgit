/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_sizer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:45:50 by dtony             #+#    #+#             */
/*   Updated: 2018/12/05 20:31:25 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_itoa_sizer(int nb)
{
	int		count;

	count = 0;
	if (nb < 0)
		count++;
	if (nb == 0)
		count++;
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}
