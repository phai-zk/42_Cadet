
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*base;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	base = *lst;
	*lst = new;
	new -> next = base;
}
