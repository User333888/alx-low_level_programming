#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - tests whether a value is lowercase
 * @c: letter being tested
 *
 * Return: Always 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
