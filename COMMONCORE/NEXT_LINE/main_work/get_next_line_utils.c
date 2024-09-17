/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:43:56 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/17 22:51:38 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./get_next_line.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = (char *)malloc(i + 1);
	if (!dest)
		return (NULL);
	i = -1;
	while (s[++i])
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

t_line	*ft_lstnew(char *content)
{
	t_line	*new_node;
	
	if (!content)
		return (NULL);
	new_node = (t_line *)malloc(sizeof(t_line));
	if (!new_node)
		return (NULL);
	new_node -> content = ft_strdup(content);
	new_node -> next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_line **lst, t_line *new)
{
	t_line	*last_point;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_point = *lst;
	while (last_point && last_point -> next != NULL)
		last_point = last_point -> next;
	last_point -> next = new;
}

t_line	*get_save(t_line *lst)
{
	t_line	*save;
	t_line	*tmp;
	char	*content_next;

	tmp = lst;
	while (tmp && tmp -> next)
		tmp = tmp -> next;
	if (tmp && tmp -> content)
	{
		content_next = tmp -> content;
		while (*content_next && *content_next != '\n')
			content_next++;
		if (!*content_next)
			return (NULL);
		content_next = ft_strdup(content_next + 1);
		if (!content_next || !*content_next)
			return (NULL);
		save = ft_lstnew(content_next);
		free(content_next);
		if (!save)
			return (NULL);
	}
	return (save);
}

void	ft_lstclear(t_line **lst)
{
	t_line	*tmp;
	t_line	*save;

	save = get_save(*lst);
	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	if (save)
		*lst = save;
	else
	{
		free(*lst);
		*lst = NULL;
	}
}
