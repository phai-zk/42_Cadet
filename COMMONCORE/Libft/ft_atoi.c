/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:35 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 15:52:00 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		resualt;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	while ((7 <= *nptr && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	i = (*nptr == '-' || *nptr == '+') - 1;
	while (nptr[++i] && ft_isdigit(nptr[i]))
		result = (result * 10) + (nptr[i] - '0');
	return (result * sign);
}

// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("LIB:\t%d\n", atoi(argv[1]));
// 	printf("MY LIB:\t%d\n", ft_atoi(argv[1]));
// 	return 0;
// }
