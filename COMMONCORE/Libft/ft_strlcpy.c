/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:13:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 13:25:32 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	while (src[++i] && !dest[i + 1] && i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
