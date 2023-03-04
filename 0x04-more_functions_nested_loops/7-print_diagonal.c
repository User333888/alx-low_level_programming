#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line to standard output
 * @n: the number of times to print \
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
