/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:47:20 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/11 19:06:53 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	formatting (va_list args, const char *format, int *idx)
{
	int	i;

	*idx += 1;
	i = *idx;
	if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format[i] == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (format[i] == 'x')
		return (ft_puthex(va_arg(args, int), "0123456789abcdef"));
	else if (format[i] == 'X')
		return (ft_puthex(va_arg(args, int), "0123456789ABCDEF"));
	return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	if (!format || *format == '\0')
		return (0);
	length = 0;
	(void)length;
	i = -1;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] != '%')
			length += ft_putchar(format[i]);
		else
			length += formatting(args, format, &i);
	}
	va_end(args);
	return (length);
}
