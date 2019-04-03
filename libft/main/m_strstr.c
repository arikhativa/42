
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "sjfb123as12jh23fbd123jf";
	char s2[] = "ttttttt";
	char *p1;
	char *p2;

	p1 = ft_strstr(s1, s2);
	p2 = strstr(s1, s2);
	printf("me       %s\n", p1);
	printf("strstr   %s\n", p2);
	return (0);
}
