#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a given integer value
 * @n: is the integer argument being passed
 * Return: Always 0 (SUCCESS)
 */
int print_last_digit(int n)
{
	printf("%d", n % 10);
	return (0);
}
