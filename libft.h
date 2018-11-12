/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:12:51 by dtony             #+#    #+#             */
/*   Updated: 2018/11/12 14:12:12 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char    *ft_strdup(const char *src);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, const char *src, int nb);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
