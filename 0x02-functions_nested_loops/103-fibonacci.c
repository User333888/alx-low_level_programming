#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the sum of even valued fibonacci terms
 * Return: 0 Always
 */
void fib(void)
{
	unsigned long a = 1, b = 2;
	unsigned long c = a + b;
	int i, n;
	unsigned long long k = 0;
	
	for (i = 3; i <= n; i++)
	{
		if (c <= 4000000)
		{
			a = b;
			b = c;
			c = a + b;
			if ((c % 2) == 0)
				k = k + c;
		}
	}
	printf("%llu\n", k);
}

int main(void)
{

	fib();
	return (0);
}
