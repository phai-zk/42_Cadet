/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:15:39 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 04:19:04 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *big, const char *little)
{
	int	i;

	i = -1;
	while (little[++i])
		if (big[i] != little[i])
			return (0);
	return (1);
}

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	lil_len;

	if (little[0] == '\0')
		return ((char *)big);
	i = -1;
	lil_len = ft_strlen(little);
	while (big[++i] && len && i < (len - lil_len + 1))
		if (check(&(big[i]), little))
			return ((char *)&(big[i]));
	return (NULL);
}
