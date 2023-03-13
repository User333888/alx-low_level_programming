#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - runs the fibonacci code
 * fibonacci50 - prints the first 50 fibonacci numbers
 * @n: the number passed to the function
 * Return: Always 0 Success
 */
void fibonacci50(int n)
{
	unsigned long int a = 1, b = 2;
	unsigned long int c = a + b;
	int i;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= n; i++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
}

int main(void)
{
	fibonacci50(50);
	return (0);
}
