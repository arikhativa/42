
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	char c = '\n';
	int n;
	int a;

	n = ft_isalnum(c);
	a = isalnum(c);
	printf("ME      %d\n", n);
	printf("ISALPHA %d\n", a);
	return (0);
}
