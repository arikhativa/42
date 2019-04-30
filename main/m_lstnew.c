
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	t_list *ptr1;
	t_list *ptr2;

	char s1[] = "yoav y";

	ptr1 = ft_lstnew(s1, ft_strlen(s1));
	printf("out %s\n", ptr1->content);
	printf("%zu\n", ptr1->content_size);

	return (0);
}
