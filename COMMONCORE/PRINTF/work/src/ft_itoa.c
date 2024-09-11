/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:02:12 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/12 00:02:15 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	long	ln;
	char	*str;

	size = 1 + (n < 0);
	sign = 1;
	if (size == 2)
		sign = -1;
	ln = (long)n * sign;
	while ((ln / 10) > 0 && ++size)
		ln /= 10;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	ln = (long)n * sign;
	while (--size >= 0)
	{
		str[size] = (ln % 10) + '0';
		ln /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}

char	*ft_unitoa(unsigned int n)
{
	int				size;
	unsigned int	tmp;
	char			*str;

	tmp = n;
	size = 1;
	while ((tmp / 10) > 0 && ++size)
		tmp /= 10;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (--size >= 0)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
