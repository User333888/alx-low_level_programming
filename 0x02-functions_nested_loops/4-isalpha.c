#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 * @c: is an integer argument
 * Return: Always 0 (SUCCESS)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
