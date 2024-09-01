/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:00:53 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 08:47:57 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)s;
	c = (unsigned char)c;
	while (str[++i])
		if (str[i] == c)
			return (&(str[i]));
	if (str[i] == c)
		return (&(str[i]));
	return (NULL);
}
