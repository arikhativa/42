
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "sjfb123as12jh23fbd123jf";
	char s2[] = "ttttt";
	unsigned int n = 100;
	char *p1;
	char *p2;

	p1 = ft_strnstr(s1, s2, n);
	p2 = strnstr(s1, s2, n);
	printf("me       %s\n", p1);
	printf("strstr   %s\n", p2);
	return (0);
}
