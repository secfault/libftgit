/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:51:03 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 21:59:25 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenght_int(int nb)
{
	int	lenght;

	lenght = 0;
	while (nb)
	{
		nb = nb / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	int		i;
	int		ng;
	int		ln;
	char	*itoa;

	i = 0;
	ng = 1;
	if (n < 0)
	{
		n = -n;
		ng = 2;
	}
	ln = ft_legnth_int(i);
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
