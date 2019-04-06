
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 7

int main()
{
	char src1[] = "12345";
	char src2[] = "12345";
	char dst1[] = "abcde";
	char dst2[] = "abcde";
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	d = ft_memcpy(dst1, src1, N);
	//d = memcpy(dst2, src2, N);
	printf("ME     %s\n", dst1);
	printf("MEMCPY %s\n", dst2);
	return (0);
}
