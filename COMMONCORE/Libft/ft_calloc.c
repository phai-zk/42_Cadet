/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:53:41 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 15:54:40 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long nmemb, unsigned long size)
{
	int				*arr;
	unsigned long	i;

	i = -1;
	arr = (void *)malloc(nmemb * size);
	if (!arr)
		return ((void *)malloc(size));
	while (++i < nmemb)
		arr[i] = 0;
	return (arr);
}

// int main()
// {
// 	char *ptr = (char *)ft_calloc(5, sizeof(char));
// 	char *ptr2 = (char *)calloc(5, sizeof(char));

// 	if (!ptr || !ptr2)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}

// 	printf("ft_calloc initialized memory:\n");
// 	for (int i = 0; i < 5; i++)
// 		printf("%c ", ptr[i]);
// 	printf("\n");

// 	printf("calloc initialized memory:\n");
// 	for (int i = 0; i < 5; i++)
// 		printf("%c ", ptr2[i]);
// 	free(ptr);
// 	free(ptr2);

// 	return 0;
// }
