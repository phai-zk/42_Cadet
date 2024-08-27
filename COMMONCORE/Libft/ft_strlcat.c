/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:13:22 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:13:23 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = -1;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[++i] && i + len_d + 1 < size)
		dest[len_d + i] = src[i];
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

// int main(void)
// {
// 	char dest2[20];
// 	char src2[] = "World";
// 	size_t l2 = ft_strlcat(dest2, src2, 11);
// 	printf("My Lib: %ld %s\n", l2, dest2);
// 	return (0);
// }
