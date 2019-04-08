
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	t_list *new;


	char s1[] = "yoav rabby";

	new = ft_lstnew(s1, ft_strlen(s1));
	printf("%s\n", (char*)new->content);
	printf("%zu\n", new->content_size);

	return (0);
}
