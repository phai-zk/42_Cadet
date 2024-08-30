/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:05:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 20:47:45 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dest;
	int		i;

	if (!src || !dest)
		return (NULL);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = -1;
	if (&src < &dest)
		while (--n >= 0)
			tmp_dest[n] = tmp_src[n];
	else
		while (++i < n)
			tmp_dest[i] = tmp_src[i];
	return (dest);
}
