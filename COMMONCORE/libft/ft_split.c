/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:29:07 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 13:25:55 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s != '\0')
			count++;
		while (*s && !(*s == c))
			s++;
	}
	return (count);
}

static char	*get_word(char *s, char c)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] && !(s[len] == c))
		len++;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[i];
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		size;
	int		i;

	size = count_word((char *)s, c);
	str_arr = (char **)malloc(size * sizeof(char *));
	if (!str_arr)
		return (NULL);
	i = -1;
	while (*s && (++i < size))
	{
		while (*s && (*s == c))
			s++;
		str_arr[i] = ft_strdup(get_word((char *)s, c));
		while (*s && !(*s == c))
			s++;
	}
	return (str_arr);
}
