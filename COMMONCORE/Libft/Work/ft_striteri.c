/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:11:17 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:11:17 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		(*f)(i, s);
}

// static void testing(unsigned int i, char *str)
// {
// 	printf("%d\t %s\n", i, ft_substr(str, i, ft_strlen(str) - i));
// }

// int main()
// {
// 	char *str = "Hello World";
// 	ft_striteri(str, &testing);
// 	return 0;
// }
