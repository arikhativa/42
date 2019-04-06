
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 2

int main()
{
	char src1[] = "12345";
	char src2[] = "12345";
	char dst1[] = "abcdeggg";
	char dst2[] = "abcdeggg";
	char *d;

	d = ft_memcpy(dst1, src1, N);
	d = memmove(dst2, src2, N);
	printf("ME     %s\n", dst1);
	printf("MEMCPY %s\n", dst2);
	return (0);
}
