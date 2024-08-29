/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:40:07 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:43:41 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'B')
		return (c + 'a' - 'A');
	return (c);
}

// #include <ctype.h>
// int main(void)
// {
//     unsigned char c = 'Z';
//     printf("That Char is %c\n", c);
//     printf("Lib:\t%c\n", tolower(c));
//     printf("My Lib:\t%c\n", ft_tolower(c));
//     return 0;
// }
