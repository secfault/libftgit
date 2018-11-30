/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:22:53 by dtony             #+#    #+#             */
/*   Updated: 2018/11/30 16:23:16 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int		ft_count_words(char *str, char c)
{
	int	i;
	int	wrdnb;

	i = 0;
	wrdnb = 0;
	while (str[i])
	{
		if (!(is_whitespace(str[i], c)))
		{
			wrdnb++;
			while (!(is_whitespace(str[i], c)) && str[i])
				i++;
		}
		else
			i++;
	}
	return (wrdnb);
}

char	**ft_alloy(int i, char *str, char c)
{
	int		n;
	int		len;
	char	**tab;

	n = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_words(str, c) + 1))))
		return (0);
	while (str[i])
	{
		if (!(is_whitespace(str[i], c)))
		{
			len = 0;
			while (!(is_whitespace(str[i], c)) && str[i])
			{
				len++;
				i++;
			}
			if (!(tab[n++] = (char *)malloc(sizeof(char) * (len + 1))))
				return (0);
		}
		else
			i++;
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		col;
	int		raw;
	char	**words_tab;

	i = 0;
	raw = 0;
	words_tab = ft_alloy(i, str, c);
	while (str[i])
	{
		if (!(is_whitespace(str[i], c)))
		{
			col = 0;
			while (!(is_whitespace(str[i], c)) && str[i])
				words_tab[raw][col++] = str[i++];
			words_tab[raw][col] = '\0';
			raw++;
		}
		else
			i++;
	}
	words_tab[raw] = NULL;
	return (words_tab);
}
