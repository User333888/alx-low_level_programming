#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a given integer value
 * @n: is the integer argument being passed
 * Return: Always 0 (SUCCESS)
 */
void charline(int);
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	putchar(a + '0');
	return (a);
}
