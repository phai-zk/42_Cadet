/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:25:01 by pkhienko          #+#    #+#             */
/*   Updated: 2024/09/16 20:52:47 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	list_clean(t_list **list, t_list *new, char *str)
{
	t_list	*cur_node;
	t_list	*temp;

	cur_node = *list;
	while (cur_node)
	{
		temp = cur_node;
		cur_node = cur_node -> next;
		free(temp -> buffer);
		free(temp);
	}
	*list = NULL;
	if (new -> buffer[0] != '\0')
		*list = new;
	else
	{
		free(str);
		free(new);
	}
}

void	pull_line(t_list **list)
{
	t_list	*last_node;
	t_list	*new_node;
	char	*new_str;
	int		i;
	int		j;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!new_str)
		return ;
	last_node = list_last(*list);
	j = 0;
	i = 0;
	while (last_node -> buffer[i] && (last_node -> buffer[i] != '\n'))
		i++;
	while (last_node -> buffer[i] && last_node -> buffer[++i])
		new_str[j++] = last_node -> buffer[i];
	new_str[j] = '\0';
	new_node -> buffer = new_str;
	new_node -> next = NULL;
	list_clean(list, new_node, new_str);
}

char	*get_line(t_list *list)
{
	char	*str;
	int		len;

	if (!list)
		return (NULL);
	len = list_len(list);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	list_strcpy(list, str);
	return (str);
}

void	create_list(t_list **list, int fd)
{
	int		read_buffer;
	char	*str;

	while (!check_new_line(*list))
	{
		str = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!str)
			return ;
		read_buffer = read(fd, str, BUFFER_SIZE);
		if (!read_buffer)
		{
			free(str);
			return ;
		}
		str[read_buffer] = '\0';
		add_back(list, str);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*list;
	char			*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0) || (read(fd, &line, 0) < 0))
		return (NULL);
	create_list(&list, fd);
	if (!list)
		return (NULL);
	line = get_line(list);
	pull_line(&list);
	return (line);
}

#include <stdio.h>

int main()
{
	int 	fd = open("text.txt", O_RDONLY);
	int 	cnt = 1;
	char	*test;

	while ((test = get_next_line(fd)))
		printf("%d -> %s\n", cnt++, test);
	return (0);
}
