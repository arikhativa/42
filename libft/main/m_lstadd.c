
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	t_list *head;
	t_list *new;
	t_list **cur;
	int n = 1;
	//char *tab[] = {"oo", "tt", "thth", NULL};

	new = malloc(sizeof(t_list));
	new->content = "zero";
	new->next = NULL;
	cur = malloc(sizeof(t_list));
	head = malloc(sizeof(t_list));
	*cur = head;

	head->content = "one";
	head->next = malloc(sizeof(t_list));
	head->next->content = "two";
	head->next->next = malloc(sizeof(t_list));
	head->next->next->content = "three";
	head->next->next->next = NULL;

	/*while (n < 2)
	{
		head = malloc(sizeof(t_list));
		head->content = malloc(sizeof(t_list));
		ft_memcpy(head->content, tab[n], ft_strlen(tab[n]));
		head->content_size = ft_strlen(tab[n]);
		head = head->next;
		n++;
	}
	head = NULL;
	*/

	ft_lstadd(cur, new);

	while (new != NULL)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
	return (0);
}
