#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci50 - prints the first 50 fibonacci numbers
 * Return: Always 0 Success
 */
int fibonacci50(void)
{
	int a = 1, b = 2;
	int c = a + b;
	int i, n = 50;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= n; i++)
	{
		printf("%d, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	return (0);
}
