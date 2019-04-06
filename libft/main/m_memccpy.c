
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 1

int main()
{
	char src1[] = "55266";
	char src2[] = "55266";
	char dst1[] = "aaaccc";
	char dst2[] = "aaaccc";
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	d = ft_memccpy(dst1, src1, '2', N);
	d = memccpy(dst2, src2, '2', N);
	printf("ME     %s\n", dst1);
	printf("MEMCPY %s\n", dst2);
	return (0);
}
