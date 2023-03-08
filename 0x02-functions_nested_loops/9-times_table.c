#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the x9 table starting from 0
 * Return: void
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j == 9)
			{
				printf("%d", i * j);
			}
			else
			{
			printf("%d,\t", i * j);
			}
			j++;
		}
	printf("\n");
	i++;
	}
}
