/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 06:18:44 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <malloc.h>

int	main(void)
{
	unsigned int	idx;
	size_t			len;
	char			*cmp;
	char			*sub;
	void			*p2;

	idx = 9;
	len = 10;
	cmp = "9";
	sub = ft_substr("0123456789", idx, len);

	printf ("%s %d\n", sub, !strcmp(sub, cmp));

	p2 = malloc(2);
	printf("%ld == %ld: %d\n", malloc_usable_size(sub), malloc_usable_size(p2), malloc_usable_size(sub) == malloc_usable_size(p2));

	free(sub);
	free(p2);
	return (0);
}
