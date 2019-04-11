
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 6

int main()
{
	char src1[] = "12345";
	char src2[] = "12345";
	char dst1[N] = "aaa";
	char dst2[N] = "aaa";
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	d = ft_strcat(dst1, src1);
	d = strcat(dst2, src2);
	printf("ME     %s\n", dst1);
	printf("STRCAT %s\n", dst2);
	return (0);
}
