#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - checks the sign of an integer value
 * @n: is the integer argument
 * Return: Always 0 (SUCCESS)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}

