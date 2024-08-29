/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:39:18 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 03:14:18 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	t_list *test = ft_lstnew((char *)"Hello");
	t_list *test2 = ft_lstnew((char *)"World");
	t_list *test3 = ft_lstnew((char *)"Na Ja");
	
	this Function is work like the test point the test2 
	and the test2 is point the test3
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*base;
	t_list	*lastPoint;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
    base = lst;
    while ()
    {
        /* code */
    }
    
}

// int main(void)
// {
// 	t_list *test = ft_lstnew((char *)"Hello");
// 	t_list *test2 = ft_lstnew((char *)"World");
// 	t_list *test3 = ft_lstnew((char *)"Na Ja");
	
// 	ft_lstadd_front(&test, test2);
// 	ft_lstadd_front(&test, test3);
	
// 	t_list	*show = test;
// 	while (show != NULL)
// 	{
// 		printf("data: %s\n", (char *)show -> content);
// 		show = show -> next;
// 	}
// 	return 0;
// }
