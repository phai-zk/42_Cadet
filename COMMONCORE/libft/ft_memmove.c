/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:05:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 13:26:26 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	char	t_arr[128];

	i = -1;
	str1 = (char *)dest;
	str2 = (char *)src;
	while (str2[++i] >= '\0')
		t_arr[i] = str2[i];
	i = -1;
	while (++i < n)
		str1[i] = t_arr[i];
	str1[i + 1] = '\0';
	return (dest);
}
