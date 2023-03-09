#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * using recursion
 * @s: string value
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
