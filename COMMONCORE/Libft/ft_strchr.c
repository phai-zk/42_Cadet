/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:00:53 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:03:14 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)s;
	while (str[++i])
		if (str[i] == c)
			return (&(str[i]));
	return ('\0');
}

// #include <string.h>
// int main(void)
// {
//     char *str1 = "Hello World";
//     char *str2 = "Hello World";
//     unsigned char find = 'c';

//     printf("LIB:\t%s,\t %s\n", strchr(str1, find), str1);
//     printf("MY LIB:\t%s,\t %s\n", ft_strchr(str2, find), str2);
//     return (0);
// }