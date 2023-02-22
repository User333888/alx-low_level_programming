#include <stdio.h>
#include "main.h"

/**
 * main - print the alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	print_alphabet();
	{
	char abc = 'a';

	while (abc <= 'z')
	{
	putchar(abc);
		abc++;
	}
	putchar('\n');
	}
}
