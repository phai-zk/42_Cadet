/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:47:20 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/19 16:11:19 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatting(va_list args, const char *format, int *idx)
{
	*idx += 1;
	if (format[*idx] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[*idx] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format[*idx] == 'd' || format[*idx] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format[*idx] == 'u')
		return (ft_putunnbr(va_arg(args, unsigned int)));
	else if (format[*idx] == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format[*idx] == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format[*idx] == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	else if (format[*idx] == '%')
		return (ft_putchar('%'));
	ft_putchar('%');
	ft_putchar(format[*idx]);
	return (2);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	if (!format || *format == '\0')
		return (0);
	length = 0;
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
