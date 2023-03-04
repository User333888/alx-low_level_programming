#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
