/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:14:13 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:14:14 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <string.h>
// int main(int argc, char *argv[])
// {
//     (void)argc;
//     printf("Lib:\t%ld\nMyLib:\t%ld\n", strlen(argv[1]), ft_strlen(argv[1]));
//     return 0;
// }
