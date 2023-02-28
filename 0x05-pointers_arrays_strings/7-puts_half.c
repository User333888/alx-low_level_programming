#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string value
 * @str: string value
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
