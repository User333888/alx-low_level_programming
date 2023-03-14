#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * fibonacci50: computes and prints the first n fibonacci numbers
 * @n: the function prints until the nth term
 * Return: void
 */
void fibonacci50(int n)
{
	unsigned long int a = 1, b = 2;
	unsigned long int c = a + b;
	int i;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= n; i++)
	{
		if (i != n)
		{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
		}
		else
		{
			printf("%ld\n", c);
		}}}
/**
 * main - runs the fibonacci code
 * Return: 0 Always success
 */
int main(void)
{
	fibonacci50(50);
	return (0);
}
