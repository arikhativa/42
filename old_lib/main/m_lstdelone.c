
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"


void	del(void *v, size_t t)
{
	ft_bzero((char*)v, t);
}

int main()
{
	t_list	*ele1;
	t_list	*ele2;
	t_list	*ele3;
	t_list	*ele4;
	char s1[] = "ahad";
	char s2[] = "stayim";
	char s3[] = "shalosh";
	char s4[] = "arba";

	ele1 = ft_lstnew(s1, sizeof(s1));
	ele2 = ft_lstnew(s2, sizeof(s2));
	ele3 = ft_lstnew(s3, sizeof(s3));
	ele4 = ft_lstnew(s4, sizeof(s4));
	ele1->next = ele2;
	ele2->next = ele3;
	ele3->next = ele4;
	
	ft_lstdelone(s1, &del);
	printf("%s\n", ele1->content);
	printf("%zu\n", ele1->content_size);
	//printf("%s\n", ele1->next);

	return (0);
}
