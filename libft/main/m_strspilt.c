
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	char s1[] = "yoav arie rabby";
	char **s3;
	int n = 0;

	s3 = ft_strsplit(s1, ' ');
	while (s3[n][0])
	{
		printf("%s\n", s3[n]);
		n++;
	}

	return (0);
}
