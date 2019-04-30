
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define LEN 3

int main()
{
	char s1[] = "ttyyyyy";
	char s2[] = "ttyyyyy";
	int new = 66;
	int n;
	int a;

	ft_bzero(s1 + 4,LEN);
	bzero(s2 + 4,LEN);
	printf("ME    %s\n", s1);
	printf("BZERO %s\n", s2);
	return (0);
}
