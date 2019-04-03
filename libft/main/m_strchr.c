
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
	char s1[] = "22322a";
	int n = '3';
	char *p1;
	char *p2;

	p1 = ft_strchr(s1, n);
	p2 = strchr(s1, n);
	printf("me       %s\n", p1);
	printf("strchr   %s\n", p2);
	return (0);
}
