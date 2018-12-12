/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:22:53 by dtony             #+#    #+#             */
/*   Updated: 2018/12/12 19:17:26 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int		ft_count_words(char *str, char c)
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

static char		**ft_alloy(int i, char *str, char c)
{
	int		n;
	int		len;
	char	**tab;

	n = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count_words(str, c) + 1))))
		return (NULL);
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
				return (NULL);
		}
		else
			i++;
	}
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		col;
	int		raw;
	char	**words_tab;

	if (s)
	{
		i = 0;
		raw = 0;
		if (!(words_tab = ft_alloy(i, (char *)s, c)))
			return (NULL);
		while (s[i])
		{
			if (!(is_whitespace(s[i], c)))
			{
				col = 0;
				while (!(is_whitespace(s[i], c)) && s[i])
					words_tab[raw][col++] = s[i++];
				words_tab[raw][col] = '\0';
				raw++;
			}
			else
				i++;
		}
		words_tab[raw] = NULL;
		return (words_tab);
	}
	return (NULL);
}
