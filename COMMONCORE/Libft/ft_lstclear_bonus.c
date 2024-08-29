/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:29:55 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/29 21:01:39 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tem;

	while (*lst)
	{
		tem = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tem;
	}
	free(*lst);
	*lst = NULL;
}
