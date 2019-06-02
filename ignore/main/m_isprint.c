
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	char c = 31;
	int n;
	int a;

	n = ft_isprint(c);
	a = isprint(c);
	printf("ME      %d\n", n);
	printf("ISPRINT %d\n", a);
	return (0);
}
