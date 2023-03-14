#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fib - prints the sum of even valued fibonacci terms
 * Return: 0 Always
 */
void fib(void)
{
	unsigned long a = 1, b = 2;
	unsigned long c = a + b;
	int i = 3;
	unsigned long k = 0;

	while (c <= 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if ((c % 2) == 0)
			k = k + c;
	} i++;
	printf("%lu\n", k + 2);
}

/**
 * main - runs the fib function
 * Return: 0 Always
 */
int main(void)
{

	fib();
	return (0);
}
