/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:07:56 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:08:07 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = c;
	return (s);
}

// #include <string.h>
// int main(void)
// {
// 	int pos = 0;
// 	int fill_size = 5;
// 	char replace = '_';

// 	char str[] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
// 	printf("Before memset():\t%s\n", str);
// 	memset(str + pos, replace, fill_size * sizeof(char));
// 	printf("After memset():\t\t%s\n", str);

// 	char str2[] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
// 	printf("\nBefore ft_memset():\t%s\n", str2);
// 	ft_memset(str2 + pos, replace, fill_size * sizeof(char));
// 	printf("After ft_memset():\t%s\n", str2);
// }
