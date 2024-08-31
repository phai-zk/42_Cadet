/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:22:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 04:06:09 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	i = -1;
	len = ft_strlen(s);
	str = (char *)s;
	c = (unsigned char)c;
	while (len - (++i) >= 0)
		if (str[len - i] == c)
			return (&(str[len - i]));
	return (NULL);
}
