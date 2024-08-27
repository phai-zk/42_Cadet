/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:22:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:32:34 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	i = -1;
	len = ft_strlen(s);
	str = (char *)s;
	while (len - (++i) >= 0)
		if (str[len - i] == c)
			return (&(str[len - i]));
	return ('\0');
}

// #include <string.h>
// int main(void)
// {
//     char *str1 = "_ABCOCBA_";
//     char *str2 = "_ABCOCBA_";
//     unsigned char find = 'C';

//     printf("LIB:\t%s,\t %s\n", strrchr(str1, find), str1);
//     printf("MY LIB:\t%s,\t %s\n", ft_strrchr(str2, find), str2);
//     return (0);
// }