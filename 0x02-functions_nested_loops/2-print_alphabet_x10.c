#include <stdio.h>
#include "main.h"

/**
 * main- prints lowercase alphabet x10
 * followed by a new line
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int i;
	char j;

	for (i = '0'; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar("\n");
	}
	return (0);
}
