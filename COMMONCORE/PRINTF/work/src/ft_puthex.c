/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:14:03 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/11 18:40:12 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_puthex(int nbr, char *base_code)
{
	int HEX;
	int	length;

	HEX = 16;
	length = 0;
	while (nbr > HEX)
	{
		length += ft_putchar(base_code[nbr % HEX]);
		nbr /= HEX;
	}
	length += ft_putchar(base_code[nbr]);
	return (length);
}