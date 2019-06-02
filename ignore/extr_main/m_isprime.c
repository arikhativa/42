

#include <stdio.h>

int ft_isprime(unsigned int nbr);

int main()
{
	unsigned int n1 = 4294967295;
	unsigned int n2 = 7;
	unsigned int n3 = 6;
	unsigned int n4 = 5;
	unsigned int n5 = 4;
	unsigned int n6 = 4294967291; //the largest unsigned prime

	printf("%d\n", ft_isprime(n1));
	printf("%d\n", ft_isprime(n2));
	printf("%d\n", ft_isprime(n3));
	printf("%d\n", ft_isprime(n4));
	printf("%d\n", ft_isprime(n5));
	printf("%d\n", ft_isprime(n6));
}

