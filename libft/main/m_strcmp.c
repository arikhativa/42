
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "12334";
	char s2[] = "1233";

	int n = ft_strcmp(s1, s2);
	int a = strcmp(s1, s2);
	printf("ME     %d\n", n);
	printf("strcmp %d\n", a);
	return (0);
}
