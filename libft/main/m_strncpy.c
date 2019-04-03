
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#define N 10

int main()
{
	int n = 10;
	char src1[] = "12345";
	char src2[] = "12345";
	char dst1[N];
	char dst2[N];
	char *d;

	printf("src1 - %s and ", src1);
	printf("dst1 - %s\n", dst1);
	printf("src2 - %s and ", src2);
	printf("dst2 - %s\n", dst2);
//	d = ft_strncpy(dst1, src1, n);
	d = strncpy(dst2, src2, n);
	printf("ME     %s\n", dst1);
	printf("strcpy %s\n", dst2);
	return (0);
}
