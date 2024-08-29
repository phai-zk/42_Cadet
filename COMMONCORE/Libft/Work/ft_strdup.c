/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:08:52 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 18:50:38 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (s[++i])
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// int	main()
// {
// 	char	*str;
// 	char	*allocated;

// 	str = "Hello World";
// 	printf("base\t : String: %s; \tAddress: @%p\n", str, str);
// 	allocated = strdup(str);
// 	printf("LIB\t : String: %s; \tAddress: @%p\n", allocated, allocated);
// 	allocated = ft_strdup(str);
// 	printf("MY LIB\t : String: %s; \tAddress: @%p\n", allocated, allocated);
// 	return (0);
// }
