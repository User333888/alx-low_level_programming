#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 * @i: integer argument passed in for loop
 * @j: char containing array of alphabet
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar("\n");
		i++;
	}
}
