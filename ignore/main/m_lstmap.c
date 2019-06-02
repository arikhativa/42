
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

t_list	*ftft(t_list *elem)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->content = ft_strnew(20);
	ft_memcpy(new->content, elem->content, 2);
	return (new);
}

int main()
{
	t_list *head;
	t_list *new;
	t_list *cur;
	t_list	*(*f)(t_list*);

	f = &ftft;

	new = malloc(sizeof(t_list));
	//new->content = "zero";
	//new->next = NULL;
	cur = malloc(sizeof(t_list));
	head = malloc(sizeof(t_list));

	head->content = "one";
	head->next = malloc(sizeof(t_list));
	head->next->content = "two";
	head->next->next = malloc(sizeof(t_list));
	head->next->next->content = "three";
	head->next->next->next = NULL;
	new = ft_lstmap(head, f);

	while (new != NULL)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
}
