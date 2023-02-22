#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - checks the sign of an integer value
 * @n: is the integer argument
 * Return: Always 0 (SUCCESS)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		printf("-");
	}
	else if (n > 0)
	{
		return (1);
		printf("+");
	}
	else (n = 0);
	{
		return (0);
		printf("0");
	}
	return (0);
}

