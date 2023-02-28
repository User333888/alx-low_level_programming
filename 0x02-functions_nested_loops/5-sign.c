#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks the sign of an integer value
 * @n: is the integer argument
 * Return: Always 1 if positive int, 0 if 0, and
 * -1 if negative int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar(48);
		return (0);
	} else if (n < 0)
	{
		putchar('-');
	}
	return (-1);
}
