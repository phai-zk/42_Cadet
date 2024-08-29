/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:35:05 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 20:51:31 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while ((lst + i)-> next != NULL)
		i++;
	return (i);
}

// int main(void)
// {
// 	t_list *test = ft_lstnew((char *)"Hello");
// 	t_list *test2 = ft_lstnew((char *)"World");
// 	t_list *test3 = ft_lstnew((char *)"Na Ja");

// 	ft_lstadd_front(&test, test2);
// 	ft_lstadd_front(&test, test3);

// 	printf("%d\n", ft_lstsize(test));
// 	return (0);
// }