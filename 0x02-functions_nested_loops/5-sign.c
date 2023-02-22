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
		printf("-");
		return (-1);
	}
	else if (n > 0)
	{
		printf("+");
		return (1);
	}
	else (n = 0);
	{
		printf("0");
		return (0);
	}
}

