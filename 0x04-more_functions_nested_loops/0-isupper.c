#include <stdio.h>
#include "main.h"

/**
 * _isupper - returns 1 if chracter is uppercase
 * returns 0 otherwise
 * @c: character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
