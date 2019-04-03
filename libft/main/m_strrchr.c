
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "223232a";
	int n = '3';
	char *p1;
	char *p2;

	p1 = ft_strrchr(s1, n);
	p2 = strrchr(s1, n);
	printf("me       %s\n", p1);
	printf("strrchr   %s\n", p2);
	return (0);
}
