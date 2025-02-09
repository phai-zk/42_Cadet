
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_point;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_point = ft_lstlast(*lst);
	last_point -> next = new;
}
