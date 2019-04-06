
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define LEN 10

int main()
{
	char s1[] = "yyypyyuuutty";
	int ndel = 't';
	char *p1;
	char *p2;

	p1 = ft_memchr(s1, ndel, LEN);
	p2 = memchr(s1, ndel, LEN);
	printf("ME     %s\n", p1);
	printf("MEMCHR %s\n", p2);
	return (0);
}
