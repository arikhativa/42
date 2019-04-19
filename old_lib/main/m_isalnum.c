
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include <ctype.h>

int main()
{
	int n;
	int a;

	n = ft_isalnum('a' + 0x100);
	a = isalnum('a' + 0x100);
	printf("ME      %d\n", n);
	printf("ISALPHA %d\n", a);
	return (0);
}
