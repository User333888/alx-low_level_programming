#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - reverses the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements in an array
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = n;

	while (i >= 0)
	{
		if (i != 0)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[0]);
		i--;
	}
	printf("\n");
}
