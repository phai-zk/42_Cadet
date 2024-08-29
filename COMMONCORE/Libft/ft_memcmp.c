/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:03:45 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:04:07 by chinujte         ###   ########.fr       */
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

// #include <string.h>
// int main(void)
// {
// 	char *a = "16";
// 	char *b = "165";
// 	size_t n = 3;

// 	printf("LIB\t\t = %d\n", memcmp(a, b, n));
// 	printf("My LIB\t = %d\n", ft_memcmp(a, b, n));
// 	return 0;
// }
