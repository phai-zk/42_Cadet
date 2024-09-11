/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/09 20:51:27 by chinujte         ###   ########.fr       */
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

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

void	ft_print_result(unsigned int i, char *s)
{
	int		len;

	(void)i;
	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

char changeCHARtoNUM(unsigned int i, char c)
{
	c = i + 49;
	return (c);
}

int	main()
{
	ft_striteri("Hello", &ft_print_result);
	// char *str = ft_strmapi("Hello", &changeCHARtoNUM);
	// printf("%s\n", str);
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
