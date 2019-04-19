
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 5

int main()
{
	char src1[] = "13425";
	char src2[] = "13425";
	char dst1[] = "abcd";
	char dst2[] = "abcd";
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	d = ft_memccpy(dst1, src1, '2', N);
	//d = memccpy(dst2, src2, '2', N);
	printf("ME     %s\n", d);
	printf("MEMCPY %s\n", d);
	return (0);
}
