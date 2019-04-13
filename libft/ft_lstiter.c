
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		if (lst->next != NULL)
			ft_lstiter(lst, f);
		f(lst);
	}
}
