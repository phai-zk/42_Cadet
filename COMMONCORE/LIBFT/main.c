/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/08 22:50:24 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <malloc.h>

static void	*ft_free(char **str_arr, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(str_arr[i]);
	free(str_arr);
	return (NULL);
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main()
{
	char *str = ft_substr("hola", 2, 3);
	char *s = malloc(sizeof(char) * 3);
	printf("%s\n", str);
	printf("%ld %ld\n", malloc_usable_size(str), malloc_usable_size(s));
	free(str);
	free(s);
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
