#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a given integer value
 * @n: is the integer argument being passed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	a = (n % 10);

	_putchar(a);
	return (a);
}
