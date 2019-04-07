
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/libft.h"

char	ftft(char c)
{
	return (c = c - 32);
}


int main()
{
	char s1[] = "aaaaaaa";
	char *s3;
	char	(*f)(char);

	f = &ftft;
	
	s3 = ft_strmap(s1, (*f));
	printf("%s\n", s1);
	printf("%s\n", s3);

	return (0);
}
