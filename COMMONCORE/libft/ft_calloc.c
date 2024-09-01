/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:53:41 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 08:00:49 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	if ((long)nmemb < 0 && (long)size < 0)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	i = -1;
	if (!arr)
		return (NULL);
	while (++i < nmemb * size)
		arr[i] = 0;
	return (arr);
}
