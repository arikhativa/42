
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "12334";
	char s2[] = "1233";
	int i = 3;

	int n = ft_strncmp(s1, s2, i);
	int a = strncmp(s1, s2, i);
	printf("ME     %d\n", n);
	printf("strncmp %d\n", a);
	return (0);
}
