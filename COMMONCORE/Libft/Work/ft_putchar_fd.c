/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:08:46 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/27 16:08:58 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

// int main()
// {
//     ft_putchar_fd('A', 0);
//     ft_putchar_fd('\n', 0);
//     ft_putchar_fd('B', 1);
//     ft_putchar_fd('\n', 0);
//     ft_putchar_fd('C', 2);
//     ft_putchar_fd('\n', 0);
//     return 0;
// }
