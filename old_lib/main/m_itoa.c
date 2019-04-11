
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

int main()
{
	int s1 = -13423450;
	char *s3;
	
	s3 = ft_itoa(s1);
	printf("%s\n", s3);

	//printf("%s\n", a[1]);

	return (0);
}
