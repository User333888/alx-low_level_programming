#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle to standard output
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, a, k = 0;

	for (i = 1; i <= size; i++)
	{
		for (a = 1; a <= (size - i); a++)
		{
			printf(" ");
		}
		while (k != (2 * (i - 1)))
		{
			printf("#");
			k++;
		}
		printf("\n");
	}
}
