/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/31 03:04:42 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(int argc, char const *argv[])
{
	char *dest;
	char *str = "";
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%ld\n", ft_strlcpy(dest, str, 15));
	printf("%d", dest[0]);
	return (0);
}