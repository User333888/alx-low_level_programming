#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string value
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
