#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 * @i: integer argument passed in for loop
 * @j: char containing array of alphabet
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int i =0;

	while (i < 10)
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
