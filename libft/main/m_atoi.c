
#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
	char s1[] = "    +986483234234234";
	int n;
	int a;

	n = ft_atoi(s1);
	a = atoi(s1);
	printf("ME   %d\n", n);
	printf("ATOI %d\n", a);
	return (0);
}
