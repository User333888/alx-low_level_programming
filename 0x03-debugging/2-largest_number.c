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

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else {
		largest = c;
	};

	if (a == b & b == c)
	{
		largest = a;
	}
	else if (a == b && b > c)
	{
		largest = b;
	}
	else if (a == b && b < c)
	{
		largest = c;
	}
	else if (a == c && b > a)
	{
		largest = b;
	}
	else if (a == c && a > b)
	{
		largest = a;
	};

	return (largest);
}
