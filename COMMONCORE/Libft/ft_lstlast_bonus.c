/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:50:44 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 20:47:24 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last -> next != NULL)
		last = last -> next;
	return (last);
}

// int main(void)
// {
// 	t_list *test = ft_lstnew((char *)"Hello");
// 	t_list *test2 = ft_lstnew((char *)"World");
// 	t_list *test3 = ft_lstnew((char *)"Na Ja");

// 	ft_lstadd_front(&test, test2);
// 	ft_lstadd_front(&test, test3);

// 	printf("%s\n", (char *)ft_lstlast(test)->content);
// 	return (0);
// }