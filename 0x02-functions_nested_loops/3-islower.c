#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - tests whether a value is 
 * lowercase or not
 * Return: Always 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
