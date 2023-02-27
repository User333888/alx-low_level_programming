#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a newline
 * @s: string value
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
