
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int main()
{
	t_list *head;

	head = malloc(sizeof(t_list));

	head->content = "one";
	head->next = malloc(sizeof(t_list));
	head->next->content = "two";
	head->next->next = NULL;
	//head->next->next = malloc(sizeof(t_list));
	//head->next->next->content = "three";
	//head->next->next->next = NULL;

	printf("%d\n", ft_lstlen(head));

	return (0);
}
