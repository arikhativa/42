
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 20

int main()
{
	unsigned int i = 5;
	char src1[] = "1234567";
	char src2[] = "1234567";
	char dst1[N] = "abcdef";
	char dst2[N] = "abcdef";
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	d = ft_strncat(dst1, src1, i);
	d = strncat(dst2, src2, i);
	printf("ME     %s\n", dst1);
	printf("STRCAT %s\n", dst2);
	return (0);
}
