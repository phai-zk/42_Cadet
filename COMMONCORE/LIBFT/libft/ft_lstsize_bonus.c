
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = (lst != NULL);
	tmp = lst;
	while (i++ && tmp -> next != NULL)
		tmp = tmp -> next;
	return (i - 1);
}
