#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a sequence of numbers
 * leading up to or counting down to 98
 * @n: integer value
 * Return: nothing
 */
void print_to_98(int n)
{
	int c;

	if (n < 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c = n)
			{
				printf("%d", n);
			}
			else 
			{
				printf(", %d", n);
			}
		}
	}
	else
	{
		for (c = n; c >= 98; c--)
		{
			if (c = n)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
	}
	printf("\n");
}
