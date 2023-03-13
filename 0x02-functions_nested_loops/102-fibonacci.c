#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fibonacci50 - prints the first 50 fibonacci numbers
 * Return: Always 0 Success
 */
void fibonacci50(int n)
{
	int a = 1, b = 2;
	int c = a + b;
	int i;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= n; i++)
	{
		printf("%d, ", c);
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
