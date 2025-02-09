#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_line
{
	char			*content;
	struct s_line	*next;
}	t_line;

char	*get_next_line(int fd);
void	ft_lstadd_back(t_line **lst, t_line *new);
void	ft_lstclear(t_line **lst, t_line *last);
char	*ft_strdup(const char *s);
t_line	*ft_lstnew(char *content);
int		check_newline(t_line *lst);

#endif