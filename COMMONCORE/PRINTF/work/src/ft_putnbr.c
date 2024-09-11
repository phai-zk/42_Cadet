/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:15:18 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/11 17:07:17 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		length;

	str = ft_itoa(n);
	length = ft_putstr(str);
	free(str);
	return (length);
}
