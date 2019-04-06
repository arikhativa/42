
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define LEN 10

int main()
{
	char s1[] = "yyyyy";
	char s2[] = "yyyy6";
	int n;
	int a;

	n = ft_memcmp(s1, s2, LEN);
	a = memcmp(s1, s2, LEN);
	printf("ME     %d\n", n);
	printf("MEMSET %d\n", a);
	return (0);
}
