/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:55:35 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 15:56:50 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	bit;

	bit = 11;
	if (ft_isdigit(c) || ft_isalpha(c))
		return ((1 << bit) >> 8);
	return (0);
}

// #include <ctype.h>
// int	main(void)
// {
// 	for (int i = 0; i < 129; i++)
// 		printf("%c %d %d\n", i, isalnum(i), ft_isalnum(i));
// 	return 0;
// }
