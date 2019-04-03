
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	char c = 'Y';
	int n;
	int a;

	n = ft_isalpha(c);
	a = isalpha(c);
	printf("ME      %d\n", n);
	printf("ISALPHA %d\n", a);
	return (0);
}
