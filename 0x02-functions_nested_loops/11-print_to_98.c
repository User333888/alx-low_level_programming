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
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d, ", n);
	}
	printf("\n");
}
