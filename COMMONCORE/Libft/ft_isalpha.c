/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:58:28 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:43:35 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	bit;

	bit = 2;
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return ((1 << bit) << 8);
	return (0);
}

// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isalpha(i), ft_isalpha(i));
// 	return 0;
// }
