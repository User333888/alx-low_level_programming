#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square to standard output
 * @n: the number of times to print \
 * Return: void
 */
void print_square(int size)
{
	int i;
	int b;

	for (i = 0; i < size; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
