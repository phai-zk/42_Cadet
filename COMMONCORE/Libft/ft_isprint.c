/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:35 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:01:36 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	bit;

	bit = 6;
	if (' ' <= c && c <= '~')
		return ((1 << bit) << 8);
	return (0);
}

// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isprint(i), ft_isprint(i));
// 	return 0;
// }
