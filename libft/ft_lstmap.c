
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (lst)
	{
		if (lst->next != NULL)
			new = ft_lstmap(lst, f);
		else
			new->next = NULL;
	}
}
