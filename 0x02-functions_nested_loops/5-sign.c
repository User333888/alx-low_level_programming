#include <stdio.h>
#include <stdlib.h>
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
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else if (n < 0)
	{
		printf("-\n");
		return (-1);
	}
	return (0);
}
