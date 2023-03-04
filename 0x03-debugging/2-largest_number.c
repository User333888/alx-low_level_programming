#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	if (b > a && b > c)
	{
		largest = b;
	}
	if (c > b && c > a)
	{
		largest = c;
	}

	return (largest);
}
