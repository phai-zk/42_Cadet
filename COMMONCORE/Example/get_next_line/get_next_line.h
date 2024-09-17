/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkhienko <pkhienko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:25:28 by pkhienko          #+#    #+#             */
/*   Updated: 2024/09/12 21:08:27 by pkhienko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	char			*buffer;
	struct s_list	*next;
}	t_list;

void	pull_line(t_list **list);
void	add_back(t_list **list, char *new);
void	create_list(t_list **list, int fd);
void	list_strcpy(t_list *list, char *str);
void	list_clean(t_list **list, t_list *new, char *str);

char	*get_next_line(int fd);
char	*get_line(t_list *list);

int		list_len(t_list *list);
int		check_new_line(t_list *list);

t_list	*list_last(t_list *list);

#endif
