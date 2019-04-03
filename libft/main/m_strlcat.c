
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#define N 2
#define ST "x"
#define NUM "7"

int main()
{
	unsigned i = N;
	char src1[] = NUM;
	char src2[] = NUM;
	char dst1[N] = ST;
	char dst2[N] = ST;
	int e;
	int d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
	e = ft_strlcat(dst1, src1, sizeof(dst1));
	d = strlcat(dst2, src2, sizeof(dst2));
	printf("ME      %s - %d\n", dst1, e);
	printf("STRCLAT %s - %d\n", dst2, d);
	return (0);
}
