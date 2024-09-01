/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:39:18 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/01 18:26:46 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_point;
	if (*lst == NULL)
	{
		printf("%s %s HELLO\n", (char *)(*lst) -> content, (char *)new -> content);
		*lst = new;
		return ;
	}
	last_point = ft_lstlast(*lst);
	last_point -> next = new;
}
