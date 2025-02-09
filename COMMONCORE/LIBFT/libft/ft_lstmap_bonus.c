
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_obj = ft_lstnew(lst -> content);
		if (new_obj == NULL)
		{
			ft_lstclear(&new_obj, del);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_obj -> content = f(new_obj -> content);
		ft_lstadd_back(&new_list, new_obj);
		lst = lst -> next;
	}
	return (new_list);
}
