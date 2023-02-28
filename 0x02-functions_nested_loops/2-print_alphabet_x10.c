#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 * 
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char abz = 'a';

		while (abz <= 'z')
		{
			putchar(abz);
			abz++;
		}
		putchar('\n');
	}
}
