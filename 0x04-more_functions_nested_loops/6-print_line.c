#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line
 * @n: number of times line is to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	i = 95;

	for (i > 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
