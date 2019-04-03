
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	char c = '9';
	int n;
	int a;

	n = ft_isdigit(c);
	a = isdigit(c);
	printf("ME      %d\n", n);
	printf("ISALPHA %d\n", a);
	return (0);
}
