/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:05 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:01:06 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	bit;

	bit = 3;
	if ('0' <= c && c <= '9')
		return ((1 << bit) << 8);
	return (0);
}

// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isdigit(i), ft_isdigit(i));
// 	return 0;
// }
