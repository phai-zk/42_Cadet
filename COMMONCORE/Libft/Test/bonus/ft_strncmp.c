/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:14:40 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 16:13:34 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

#include <string.h>
int main(void)
{
	char *a = "16";
	char *b = "165";
	size_t n = 3;
	printf("LIB\t\t = %d\n", strncmp(a, b, n));
	printf("My LIB\t = %d\n", ft_strncmp(a, b, n));
	return 0;
}