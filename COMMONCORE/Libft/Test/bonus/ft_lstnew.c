/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:22:12 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/28 18:36:40 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = (t_list *)malloc(sizeof(t_list));
	if (!newNode)
		return (NULL);
	newNode -> content = content;
	newNode -> next = NULL;
	return (newNode);

}