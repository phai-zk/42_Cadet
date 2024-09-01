/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 02:33:14 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 07:29:36 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <malloc.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main(int argc, const char *argv[])
{
	t_list		*elem;
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char	str [] = "lorem ipsum dolor sit";

		if (!(elem = ft_lstnew(str)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
			{
				ft_print_result(elem->content);
			}
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	}
	else if (arg == 2)
	{
		int		i;

		i = 42;
		if (!(elem = ft_lstnew(&i)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
			{
				ft_print_result2(*(int *)(elem->content));
			}
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
	}
	else if (arg == 3)
	{
		if (!(elem = ft_lstnew(NULL)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
			{
				ft_print_result("NULL");
			}
			else
			{
				ft_print_result(elem->content);
			}
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
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
