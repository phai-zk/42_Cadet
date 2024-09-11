/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:43:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/12 01:51:57 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putptr(unsigned long long pointer)
{
	int	length;

	if (!pointer)
		return (ft_putstr("(nil)"));
	length = ft_putstr("0x");
	length += ft_putptrhex(pointer, "0123456789abcdef");
	return (length);
}