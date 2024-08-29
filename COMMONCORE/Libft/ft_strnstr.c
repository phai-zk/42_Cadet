/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:15:39 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 17:15:40 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *big, const char *little)
{
	int	i;

	i = -1;
	while (little[++i])
		if (big[i] != little[i])
			return (0);
	return (1);
}

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	i = -1;
	while (big[++i] && i < len)
		if (check(&(big[i]), little))
			return ((char *)&(big[i]));
	return (0);
}

// int main(void)
// {
// 	char big[30] = "Hello rld  World NaJa";
// 	char little[20] = "or";
// 	size_t n = 15;
// 	char *find = ft_strnstr(big, little, n);
// 	printf("find: %s\n", find);
// 	return 0;
// }