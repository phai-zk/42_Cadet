/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:52:47 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 17:51:50 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = -1;
	while(++i < n)
		str[i] = '\0';
}

// #include <string.h>
// int main(void)
// {
// 	int pos = 21;
// 	int n = 5;

// 	char str[] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
// 	printf("\nBefore bzero():\t\t%s\n", str);
// 	bzero(str + pos, n);
// 	printf("After bzero():\t\t%s\n", str);

// 	char str2[] = "Lorem ipsum dolor sit amet consectetur adipisicing elit.";
//     printf("\nBefore ft_bzero():\t%s\n", str2);
// 	ft_bzero(str2 + pos, n);
// 	printf("After ft_bzero():\t%s\n", str2);
// }
