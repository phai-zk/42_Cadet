/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 07:51:52 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <malloc.h>


int		main(int argc, const char *argv[])
{
	void	*mem;

	alarm(5);
	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
		return (0);
	if (atoi(argv[1]) == 1)
	{
		ft_memset(mem, -10, 5);
		memset(mem, -10, 5);
		write(1, mem, 5);
	}
	else if (atoi(argv[1]) == 2)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 0);
		write(1, mem, 5);
	}
	return (0);
}

// int	test_substr(void)
// {
	// unsigned int	idx;
	// size_t			len;
	// char			*cmp;
	// char			*sub;
	// void			*p2;

	// idx = 9;
	// len = 10;
	// cmp = "9";
	// sub = ft_substr("0123456789", idx, len);

	// printf ("%s %d\n", sub, !strcmp(sub, cmp));

	// p2 = malloc(2);
	// printf("%ld == %ld: %d\n", malloc_usable_size(sub), malloc_usable_size(p2), malloc_usable_size(sub) == malloc_usable_size(p2));

	// free(sub);
	// free(p2);
	// return (0);
// }
