/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:16:53 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/28 10:15:36 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	char	*str;

	str = s;
	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	if (!s)
		free(str);
	return (i);
}
