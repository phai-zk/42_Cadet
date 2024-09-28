/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:15:30 by chinujte          #+#    #+#             */
/*   Updated: 2024/09/28 14:33:16 by chinujte         ###   ########.fr       */
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

char	*ft_strchr(const char *s)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)s;
	while (str[++i])
		if (str[i] == '\n' && str[i + 1] != '\0')
			return (&(str[i + 1]));
	return (NULL);
}

void	ft_lstclear(t_line **lst, t_line *last)
{
	t_line	*tmp;
	t_line	*save;

	save = ft_lstnew(ft_strchr(last -> content));
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
