/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:44:41 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/11 18:36:39 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	    ft_putchar(char c);
int	    ft_putstr(char *s);
int	    ft_putnbr(int n);
int	    ft_puthex(int nbr, char *base_code);
char	*ft_itoa(int n);

#endif
