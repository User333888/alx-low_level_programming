#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle to standard output
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
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
