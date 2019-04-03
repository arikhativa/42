
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"


int main()
{
	char s1[] = "hey";
	char *s2;

	s2 = ft_strdup(s1);
	printf("%s\n", s2);
	return (0);
}
