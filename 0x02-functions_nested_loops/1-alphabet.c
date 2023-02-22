#include <stdio.h>
#include "main.h"

/**
 * main - print the alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (SUCCESS)
 */
void main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
	putchar(abc);
		abc++;
	}
	putchar('\n');
}
