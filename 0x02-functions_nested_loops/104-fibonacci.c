#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * fibonacci - prints fibonacci series using recursion
 * Return: void
 */
void fibonacci(int n)
{
	unsigned long int a = 1, b = 2;
	unsigned long int c;
	
	if (n > 0)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", c);
		fibonacci(n-1);
	}

	else if (n == 98)
	{
	c = a + b;
	a = b;
	b = c;
	printf("%ld\n", c);
	}
}

/**
 * main - runs the fibonnaci code
 * Return: 0 Always Success
 */
int main(void)
{
	fibonacci(98);
	return (0);
}
