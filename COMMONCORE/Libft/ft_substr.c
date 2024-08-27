/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:33:45 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:39:21 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = (char *)malloc(len * sizeof(char));
	if (!sub)
		return ('\0');
	i = -1;
	while (++i < len && s[start + i])
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}

// int main(void)
// {
// 	char *s = "Hello World!";
//     unsigned int start = 6;
//     size_t len = 10;
//     printf("%s\n", ft_substr(s, start, len));
// 	return 0;
// }
