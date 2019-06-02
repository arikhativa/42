
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "     ";
	char *s3;
	int n = 0;

	s3 = ft_strtrim(s1);
	printf("%s\n", s3);
	return (0);
}
