/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:03:03 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:03:10 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = -1;
	str = (char *)s;
	while (str[++i] && i < n)
		if (str[i] == c)
			return (&(str[i]));
	return ('\0');
}

// #include <string.h>
// int main(void)
// {
// 	char *str1 = "_ABCOCBA_";
// 	char *str2 = "_ABCOCBA_";
// 	unsigned char find = 'C';
// 	size_t	n = 5;

// 	printf("LIB:\t%s,\t %s\n", (char *)memchr(str1, find, n), str1);
// 	printf("MY LIB:\t%s,\t %s\n", (char *)ft_memchr(str2, find, n), str2);
// 	return (0);
// }
