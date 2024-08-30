/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:03:45 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 13:26:43 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = -1;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (++i < n && (str1[i] || str2[i]))
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}
