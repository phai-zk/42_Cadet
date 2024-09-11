/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:16:53 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/12 02:23:55 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int		i;
	char	*str;

	str = s;
	if (!s)
		str = ft_strdup("(null)");
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	if (!s)
		free(str);
	return (i);
}
