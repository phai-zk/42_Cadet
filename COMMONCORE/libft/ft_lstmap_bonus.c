/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:17:27 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 21:29:44 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_obj = ft_lstnew(lst -> content);
		if (new_list == NULL)
		{
			ft_lstclear(&new_obj, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst -> next;
	}
	return (new_list);
}
