#include "get_next_line.h"

int	check_newline(t_line *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = -1;
	while (lst->content[++i])
		if (lst->content[i] == '\n')
			return (1);
	return (0);
}

int	contents_length(t_line *lst)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (lst)
	{
		if (lst->content[++i] == '\n')
			return (len + 1);
		if (!lst->content[i])
		{
			i = -1;
			lst = lst->next;
		}
		else
			len++;
	}
	return (len);
}

char	*create_line(t_line *lst)
{
	char	*str_line;
	int		i;
	int		j;
	int		length;

	i = -1;
	j = 0;
	length = contents_length(lst);
	str_line = (char *)malloc((length + 1) * sizeof(char));
	if (!str_line)
		return (NULL);
	str_line[length] = '\0';
	while (lst && ++i + 1)
	{
		if (lst->content[i] && j < length)
			str_line[j++] = lst->content[i];
		else if (!lst->content[i])
		{
			i = -1;
			lst = lst->next;
		}
		if (lst && i >= 0 && lst->content[i] == '\n')
			return (str_line);
	}
	return (str_line);
}

int	read_line(t_line **lst, int fd)
{
	char	*text;
	t_line	*tmp;
	ssize_t	buffer;

	buffer = 1;
	tmp = *lst;
	while (buffer > 0 && !check_newline(tmp))
	{
		text = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!text)
			return (0);
		buffer = read(fd, text, BUFFER_SIZE);
		if (buffer <= 0)
		{
			free(text);
			return (buffer);
		}
		text[buffer] = '\0';
		tmp = ft_lstnew(text);
		free(text);
		if (!tmp)
			return (0);
		ft_lstadd_back(lst, tmp);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static t_line	*lst_line;
	t_line			*last;
	char			*content;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		ft_lstclear(&lst_line, NULL);
		return (NULL);
	}
	read_line(&lst_line, fd);
	if (!lst_line)
	{
		ft_lstclear(&lst_line, NULL);
		return (NULL);
	}
	content = create_line(lst_line);
	last = lst_line;
	while (last->next)
		last = last->next;
	ft_lstclear(&lst_line, last);
	return (content);
}
