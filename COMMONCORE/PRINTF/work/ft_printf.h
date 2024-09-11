/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:48:43 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/12 02:24:47 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunnbr(unsigned int n);
int		ft_puthex(unsigned int nbr, char *base_code);
int		ft_putptrhex(unsigned long long nbr, char *base_code);
int		ft_putptr(unsigned long long pointer);
char	*ft_itoa(int n);
char	*ft_unitoa(unsigned int n);
char	*ft_strdup(const char *s);

#endif