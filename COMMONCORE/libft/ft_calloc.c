/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:53:41 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 13:32:18 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long nmemb, unsigned long size)
{
	int				*arr;
	unsigned long	i;

	i = -1;
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return ((void *)malloc(size));
	while (++i < nmemb)
		arr[i] = 0;
	return (arr);
}
