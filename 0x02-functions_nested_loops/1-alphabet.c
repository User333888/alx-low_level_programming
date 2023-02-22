#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (SUCCESS)
 */
void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
	_putchar (abc);
		abc++;
	}
	putchar ('\n');
}
