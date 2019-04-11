
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define LEN 3

int main()
{
	char s1[] = "yyyyy";
	char s2[] = "yyyyy";
	int new = 66;
	int n;
	int a;

	ft_memset(s1, new, LEN);
	memset(s2, new, LEN);
	printf("ME     %s\n", s1);
	printf("MEMSET %s\n", s2);
	return (0);
}
