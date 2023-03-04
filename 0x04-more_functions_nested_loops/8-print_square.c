#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square to standard output
 * @n: the number of times to print \
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
