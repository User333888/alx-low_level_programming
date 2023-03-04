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
		int c;

		for (i = 0; i <= n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
