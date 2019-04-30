
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	char c = -7;
	int n;
	int a;

	n = ft_isascii(c);
	a = isascii(c);
	printf("ME      %d\n", n);
	printf("ISALPHA %d\n", a);
	return (0);
}
