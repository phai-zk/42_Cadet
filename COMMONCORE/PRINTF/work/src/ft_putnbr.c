/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:15:18 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/12 01:32:06 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;
	int		length;

	str = ft_itoa(n);
	length = ft_putstr(str);
	free(str);
	return (length);
}

int	ft_putunnbr(unsigned int n)
{
	char	*str;
	int		length;

	str = ft_unitoa(n);
	length = ft_putstr(str);
	free(str);
	return (length);
}
