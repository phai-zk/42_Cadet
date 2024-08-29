/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:43:57 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:44:28 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

// #include <ctype.h>
// int main(void)
// {
//     unsigned char c = 'a';
//     printf("That Char is %c\n", c);
//     printf("Lib:\t%c\n", toupper(c));
//     printf("My Lib:\t%c\n", ft_toupper(c));
//     return 0;
// }
