#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - prints a string to standard output using recursion
 * @s: string value
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0 ){
		break;
	}
	_putchar(s);
	s = s + 1;
	_puts_recursion(s);
}

