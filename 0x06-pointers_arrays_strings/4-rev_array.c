#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements in an array
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int len;

	for (len = 0; a[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		printf("%d\n", a[i]);
	}
	putchar('\n');
}
